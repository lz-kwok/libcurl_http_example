PROJECT_DIR := $(shell pwd)
EX_DIR      := ../..
COMMON_DIR  := $(shell cd `dirname $0`; pwd)
TOP_DIR     := $(COMMON_DIR)/dev_Lamp

DIR_INC = $(PROJECT_DIR)/inc
DIR_SRC = $(PROJECT_DIR)/src
DIR_BIN = $(PROJECT_DIR)/bin

SRC = $(wildcard ${DIR_SRC}/*.cpp ${DIR_SRC}/*.c)  

export CXX = $(TOP_DIR)/buildroot/output/rockchip_rk3308_32_debug/host/bin/arm-rockchip-linux-gnueabihf-g++

INCLUDE  =  -I../extern/include 
INCLUDE  += -I$(DIR_INC)
CPPFLAGS =  -Wall -fopenmp -O2 -fPIC -g -D__LINUX__ -Wl,-rpath=../../extern/hostlib,--disable-new-dtags -L../../extern/hostlib -lcurl
CPPFLAGS += -lrt -ldl -lpthread 


TARGET = myHttp
BIN_TARGET = ${DIR_BIN}/${TARGET}

all:myHttp

myHttp:
	$(CXX) -o $(BIN_TARGET) $(SRC) $(INCLUDE) $(CPPFLAGS)

	
.PHONY : install clean  
clean:
	rm -rf ./bin/myHttp
	@echo "clean done" 
