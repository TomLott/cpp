cmake_minimum_required(VERSION 3.17)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

include_directories(.)

add_executable(ex03
        Bureaucrat.cpp
        Bureaucrat.hpp
        Form.cpp
        Form.hpp
        Intern.cpp
        Intern.hpp
        main.cpp
        PresidentialPardonForm.cpp
        PresidentialPardonForm.hpp
        RobotomyRequestForm.cpp
        RobotomyRequestForm.hpp
        ShrubberyCreationForm.cpp
        ShrubberyCreationForm.hpp)
