cmake_minimum_required(VERSION 3.19)
project(0x02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03
        ex03/main.cpp
        ex03/AForm.hpp
        ex03/AForm.cpp
        ex03/Bureaucrat.cpp
        ex03/Bureaucrat.hpp
        ex03/ShrubberyCreationForm.cpp
        ex03/ShrubberyCreationForm.hpp
        ex03/RobotomyRequestForm.cpp
        ex03/RobotomyRequestForm.hpp
        ex03/PresidentialPardonForm.cpp
        ex03/PresidentialPardonForm.hpp
        ex03/Intern.cpp ex03/Intern.hpp)
