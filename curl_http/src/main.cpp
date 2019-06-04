#include <iostream>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/io.h>
#include <sys/stat.h>
#include <vector>
#include <signal.h>
#include <list>
#include <curl/curl.h>

#include "myHttp_curl.hpp"



using namespace std;
using namespace mycurl;

string posturl = "http://";



void *myHttp_run(void *para){
	my_curl curl;
	my_curl *CURLSAMPLE = new my_curl;
	while(1){
			string para = "{\"hello\":\"this is myHttp_run Test\"}";

			string Response;
			std::list<std::string> slist{("Content-Type:application/json;charset=UTF-8")};
			// CURLcode code = curl.curl_post_req(posturl,para, Response, slist, true, 10, 10);
			CURLcode code = CURLSAMPLE->curl_post_req(posturl,para, Response, slist, true, 10, 10);
			cout << "code:" << code << endl;
			cout << "Response:" << Response << endl;


			sleep(20);
		}

}




int main(int argc, char** argv) {
    curl_global_init(CURL_GLOBAL_ALL);

	pthread_t id;
    pthread_create(&id, NULL, myHttp_run, NULL);

    while (1) {
		sleep(10);
    }

    curl_global_cleanup();
    return 0;
}
