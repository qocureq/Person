cmake_minimum_required(VERSION 3.21)
project(person)

set(CMAKE_CXX_STANDARD 20)

add_executable(person main.cpp Person.cpp Person.h Worker.cpp Worker.h Manager.cpp Manager.h)