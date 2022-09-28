cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp Person.cpp Person.h VladClasses/Manager.cpp VladClasses/Manager.h)
