cmake_minimum_required(VERSION 3.23)
project(Labor5 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor5 src/main.c src/functions.c Headers/functions.h)
include_directories(Labor5 Headers)
