cmake_minimum_required(VERSION 3.17)
project(ex06)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex06
        HumanA.cpp
        HumanA.hpp
        HumanB.cpp
        HumanB.hpp
        Weapon.cpp
        Weapon.hpp
        main.cpp)
