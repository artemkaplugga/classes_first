cmake_minimum_required(VERSION 3.28)
project(classesTwo)

set(CMAKE_CXX_STANDARD 17)

add_executable(classesTwo main.cpp
        Rectangle.cpp
        Rectangle.h
        Figure.cpp
        Figure.h
        Triangle.cpp
        Triangle.h
        Circle.cpp
        Circle.h)
