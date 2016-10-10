cmake_minimum_required(VERSION 3.6)
project(lab1_GMWEB)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp kalkulator.cpp kalkulator.h)
add_executable(lab2_GMWEB ${SOURCE_FILES})