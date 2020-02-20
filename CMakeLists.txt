cmake_minimum_required(VERSION 2.8)
# this should be the name of the homework
project(Demo)

set(CMAKE_CXX_STANDARD 11)

add_executable(demo main.cpp rectangle.cpp Square.cpp)
