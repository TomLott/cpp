cmake_minimum_required(VERSION 3.17)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

include_directories(.)

add_executable(ex03
        ICharacter.hpp
        Cure.cpp
        Cure.hpp
        Ice.cpp
        Ice.hpp
        Character.cpp
        Character.hpp
        AMateria.cpp
        AMateria.hpp)
