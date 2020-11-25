cmake_minimum_required(VERSION 3.0)
project(AOCCCP)
set(SOURCE main.cpp)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp -o3")

add_executable(${PROJECT_NAME} ${SOURCE})
