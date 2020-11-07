cmake_minimum_required(VERSION 3.17)
project(numeros_complejos C)

set(CMAKE_C_STANDARD 99)

add_executable(numeros_complejos main.c)

target_link_libraries(numeros_complejos m)
target_link_libraries(numeros_complejos curses)
