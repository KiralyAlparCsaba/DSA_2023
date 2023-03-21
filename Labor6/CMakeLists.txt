cmake_minimum_required(VERSION 3.23)
project(Labor6 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor6 src/main.c Headers/functions.c Headers/functions.h Headers/medicalCenter.c Headers/medicalCenter.h)

include_directories(Labor6 Headers)