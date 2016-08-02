cmake_minimum_required(VERSION 3.5)
project(HelloWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#set(SOURCE_FILES main.cpp)
set(SOURCE_FILES 1.c)
set(SOURCE_FILES 2.c)
add_executable(HelloWorld ${SOURCE_FILES})