cmake_minimum_required(VERSION 3.29)
project(clox C)

set(CMAKE_C_STANDARD 23)

include_directories(src)

add_executable(clox
    src/common.h
    src/main.c)
