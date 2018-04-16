cmake_minimum_required(VERSION 3.8)
project(Hello)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(Hello ${SOURCE_FILES})