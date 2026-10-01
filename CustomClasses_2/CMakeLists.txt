cmake_minimum_required(VERSION 4.0)
project(CustomClasses_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(CustomClasses_2 main.cpp
        Rectangle.h
        Rectangle.cpp
        Cube.cpp
        Cube.h)
