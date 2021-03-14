cmake_minimum_required(VERSION 3.17)
project(ex02)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex02
        Zombie.cpp
        Zombie.hpp main.cpp ZombieEvent.hpp ZombieEvent.cpp)
