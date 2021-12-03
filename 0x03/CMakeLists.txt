cmake_minimum_required(VERSION 3.20)
project(cpp_module)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)

add_executable(cpp_module
        ex00/main.cpp
        ex00/ClapTrap.cpp
        ex00/ClapTrap.hpp)
