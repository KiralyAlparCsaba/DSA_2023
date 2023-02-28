cmake_minimum_required(VERSION 3.23)
project(Lab3 C)

set(CMAKE_C_STANDARD 23)

add_executable(Lab3 src/main.c src/functions.c Headers/functions.h)
include_directories(Lab3 Headers)
