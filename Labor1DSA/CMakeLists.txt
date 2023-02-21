cmake_minimum_required(VERSION 3.23)
project(Labor1DSA C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor1DSA Src/main.c Src/functions.c Headers/functions.h)
include_directories(Labor1DSA Headers)