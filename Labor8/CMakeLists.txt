cmake_minimum_required(VERSION 3.23)
project(Labor8 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor8 src/main.c src/functions.c headers/functions.h)

include_directories(Labor8 headers)
