cmake_minimum_required(VERSION 3.6)
project(atomicExample)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(atomicExample ${SOURCE_FILES})