cmake_minimum_required(VERSION 3.17)
project(conversoSN C)

set(CMAKE_C_STANDARD 99)

add_executable(conversoSN main.c utilidades.h)

target_link_libraries(conversoSN m)