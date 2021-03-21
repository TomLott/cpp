cmake_minimum_required(VERSION 3.17)
project(ex04)

set(CMAKE_CXX_STANDARD 98)

include_directories(.)

add_executable(ex04
        ClapTrap.cpp
        ClapTrap.hpp
        FragTrap.cpp
        FragTrap.hpp
        main.cpp
        NinjaTrap.cpp
        NinjaTrap.hpp
        ScavTrap.cpp
        ScavTrap.hpp
        SuperTrap.cpp
        SuperTrap.hpp)
