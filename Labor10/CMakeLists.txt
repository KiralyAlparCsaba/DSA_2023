cmake_minimum_required(VERSION 3.23)
project(Labor10 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor10 src/main.c src/binary_tree.c headers/binary_tree.h src/binary_search_tree.c headers/binary_search_tree.h)

include_directories(Labor10 headers)
