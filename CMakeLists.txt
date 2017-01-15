cmake_minimum_required(VERSION 3.6)
project(leetcode_practice)

set(CMAKE_CXX_FLAGS "-std=c++11 -stdlib=libc++")

set(SOURCE_FILES HammingDistance461.cpp)
add_executable(leetcode_practice ${SOURCE_FILES})