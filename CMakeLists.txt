cmake_minimum_required(VERSION 3.21)
project(New_Matam C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(tool)

add_executable(New_Matam
        tool/AsciiArt.c
        tool/AsciiArt.h
        tool/main.c
        RLEList.c
        RLEList.h)
