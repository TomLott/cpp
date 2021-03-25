cmake_minimum_required(VERSION 3.17)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

include_directories(.)

add_executable(ex02
        Bureaucrat.cpp
        Bureaucrat.hpp
        Form.cpp
        Form.hpp
        main.cpp
        RobotomyRequestForm.cpp
        RobotomyRequestForm.hpp
        ShrubberyCreationForm.cpp
        ShrubberyCreationForm.hpp PresidentialPardonForm.cpp PresidentialPardonForm.hpp)
