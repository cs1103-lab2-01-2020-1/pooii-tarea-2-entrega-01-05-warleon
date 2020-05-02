cmake_minimum_required(VERSION 3.10)

project(tareaPOO2Lab)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "src/*")

add_executable(tarea3POO2Lab src/main.cpp)
