cmake_minimum_required(VERSION 3.20)
project(0x01)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex04)

add_executable(0x01
        ex04/file.cpp
        ex04/file.hpp
        ex04/main.cpp)
