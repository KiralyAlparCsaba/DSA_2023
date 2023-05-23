cmake_minimum_required(VERSION 3.23)
project(Info_A C)

set(CMAKE_C_STANDARD 23)

add_executable(Info_A src/main.c src/bsc.c headers/bsc.h)

include_directories(Info_A headers)
