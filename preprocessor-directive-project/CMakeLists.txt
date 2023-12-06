cmake_minimum_required(VERSION 3.00)

project(preprocessor-directive-project C)

set(SOURCES header-guard.c)

add_executable(header-guard ${SOURCES})

add_compile_definitions(DEBUG=0)
