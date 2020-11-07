cmake_minimum_required(VERSION 3.17)
project(circunferencia C)

set(CMAKE_C_STANDARD 99)

add_executable(circunferencia main.c)

target_link_libraries(circunferencia m)