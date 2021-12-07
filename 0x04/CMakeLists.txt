cmake_minimum_required(VERSION 3.19)
project(cpp_module)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wshadow  -Wno-shadow")

include_directories(ex00)

add_executable(cpp_module
        ex03
        ex03/main.cpp
        ex03/Cure.cpp
        ex03/Cure.hpp
        ex03/AMateria.cpp
        ex03/AMateria.hpp
        ex03/Character.cpp
        ex03/Character.hpp
        ex03/ICharacter.hpp
        ex03/MateriaSource.cpp
        ex03/MateriaSource.hpp
        ex03/IMateriaSource.hpp ex03/Ice.cpp ex03/Ice.hpp)
