cmake_minimum_required(VERSION 3.26)
project(untitled15 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled15 main.c
        libs/data_structures/matrix/matrix.c
        libs/data_structures/matrix/matrix.h
)
