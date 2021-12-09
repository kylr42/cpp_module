cmake_minimum_required(VERSION 3.19)
project(0x02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex02
        ex02/main.cpp
        ex02/AForm.hpp
        ex02/AForm.cpp
        ex02/Bureaucrat.cpp
        ex02/Bureaucrat.hpp
        ex02/ShrubberyCreationForm.cpp
        ex02/ShrubberyCreationForm.hpp
        ex02/RobotomyRequestForm.cpp
        ex02/RobotomyRequestForm.hpp
        ex02/PresidentialPardonForm.cpp
        ex02/PresidentialPardonForm.hpp
        )
