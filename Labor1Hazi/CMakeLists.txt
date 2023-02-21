cmake_minimum_required(VERSION 3.23)
project(Labor1Hazi C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor1Hazi Src/main.c Src/functions.c Headers/functions.h)
include_directories(Labor1Hazi Headers)
