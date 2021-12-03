cmake_minimum_required(VERSION 3.20)
project(cpp_module)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)

add_executable(cpp_module
        ex01/main.cpp
        ex01/ClapTrap.cpp
        ex01/ClapTrap.hpp
        ex01/ScavTrap.cpp
        ex01/ScavTrap.hpp
        )
