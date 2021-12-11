cmake_minimum_required(VERSION 3.19)
project(0x02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/main.cpp
        ex00/Converter.cpp ex00/Converter.hpp)
