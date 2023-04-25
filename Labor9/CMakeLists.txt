cmake_minimum_required(VERSION 3.23)
project(Labor9 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor9 main.c src/functions.c headers/functions.h)

include_directories(Labor9 headers)