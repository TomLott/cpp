cmake_minimum_required(VERSION 3.17)
project(ex05)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex05
        Brain.cpp
        Brain.hpp
        Human.cpp
        Human.hpp
        main.cpp)
