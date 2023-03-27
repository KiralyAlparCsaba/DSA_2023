cmake_minimum_required(VERSION 3.23)
project(Labor4 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor4 src/main.c src/functions.c Headers/functions.h)

include_directories(Labor4 Headers)
