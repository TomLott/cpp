cmake_minimum_required(VERSION 3.17)
project(day03)

set(CMAKE_CXX_STANDARD 98)

include_directories(ex00)

add_executable(day03
        ex00/FragTrap.cpp
        ex00/FragTrap.hpp
        ex00/main.cpp)
