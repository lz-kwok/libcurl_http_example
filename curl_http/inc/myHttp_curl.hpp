#ifndef _BD_CURL_HPP_
#define _BD_CURL_HPP_

#include <string>

namespace mycurl{
//class my_curl{
//public:
	// CURLcode curl_get_req(const std::string &url, std::string &response,std::list<std::string> listRequestHeader,
	// 						bool bResponseIsWithHeaderData , int nConnectTimeout, int nTimeout);

	// CURLcode curl_post_req(const std::string &url, const std::string &postParams, std::string &response, std::list<std::string> listRequestHeader, 
	// 							bool bResponseIsWithHeaderData , int nConnectTimeout, int nTimeout);

	CURLcode CURL_Post_Req(const std::string &url, const std::string &postParams, std::string &response, std::list<std::string> listRequestHeader, 
							bool bResponseIsWithHeaderData , int nConnectTimeout, int nTimeout);

//	my_curl();

//private:
	
	//};

}


#endif
