cmake_minimum_required(VERSION 3.27)
project(kolejka_a)

set(CMAKE_CXX_STANDARD 17)

add_executable(kolejka_a main.cpp
        queue.cpp
        queue.h)
