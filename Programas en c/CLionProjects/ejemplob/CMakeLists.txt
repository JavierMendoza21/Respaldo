cmake_minimum_required(VERSION 3.17)
project(ejemplob C)

set(CMAKE_C_STANDARD 99)

add_executable(ejemplob main.c)

target_link_libraries(ejemplob bluetooth)