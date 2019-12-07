cmake_minimum_required(VERSION 3.15)
project(library_management)

set(CMAKE_CXX_STANDARD 17)

add_executable(library_management main.cpp Book.h Book.cpp Library.h Customer.h Library.cpp Customer.cpp)