cmake_minimum_required(VERSION 3.23)
project(Lab2 C)

set(CMAKE_C_STANDARD 23)

add_executable(Lab2 Src/main.c Src/functions.c Header/functions.h Header/constant.h)

include_directories(Lab2 Header)