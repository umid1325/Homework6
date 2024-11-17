cmake_minimum_required(VERSION 3.29)
project(Homework6)

set(CMAKE_CXX_STANDARD 20)

add_executable(Homework6 main.cpp
        problem1.cpp
        problem2.cpp
        problem3.cpp
        problem4.cpp
        problem5.cpp)
add_executable(problem1 problem1.cpp)
add_executable(problem2 problem2.cpp)
add_executable(problem3 problem3.cpp)
add_executable(problem4 problem4.cpp)
add_executable(problem5 problem5.cpp)
