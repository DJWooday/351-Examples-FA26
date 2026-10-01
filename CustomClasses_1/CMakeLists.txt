cmake_minimum_required(VERSION 4.0)
project(CustomClasses_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(CustomClasses_1 main.cpp
        Rectangle.cpp
        Rectangle.h
        Sphere.h
        Sphere.cpp
        Cube.cpp
        Cube.h)
