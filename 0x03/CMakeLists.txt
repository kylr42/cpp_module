cmake_minimum_required(VERSION 3.19)
project(cpp_module)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wshadow  -Wno-shadow")

include_directories(ex00)

add_executable(cpp_module
        ex03/main.cpp
        ex03/ClapTrap.cpp
        ex03/ClapTrap.hpp
        ex03/ScavTrap.cpp
        ex03/ScavTrap.hpp
        ex03/FragTrap.cpp
        ex03/FragTrap.hpp
        ex03/DiamondTrap.cpp
        ex03/DiamondTrap.hpp
        )
