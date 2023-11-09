cmake_minimum_required(VERSION 3.00)

project(modularization-project C)

add_executable(console console.c vector.c)

target_link_libraries(console m)
