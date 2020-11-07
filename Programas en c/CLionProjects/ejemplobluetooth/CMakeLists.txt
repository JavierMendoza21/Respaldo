cmake_minimum_required(VERSION 3.17)
project(bluetooth C)

set(CMAKE_C_STANDARD 99)

add_executable(bluetooth main.c)

target_link_libraries(bluetooth bluetooth)