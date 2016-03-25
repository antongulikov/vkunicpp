cmake_minimum_required(VERSION 3.3)
project(TestProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp MyPoint.cpp MyPoint.h Person.cpp Person.h Man.cpp Man.h Woman.cpp Woman.h)
add_executable(TestProject ${SOURCE_FILES})