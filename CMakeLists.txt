cmake_minimum_required(VERSION 3.3)
project(recipes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    5-8_deep_copy.cpp)

add_executable(recipes ${SOURCE_FILES})