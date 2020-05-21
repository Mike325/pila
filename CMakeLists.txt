cmake_minimum_required(VERSION 3.0.0)
project(pila)

include_directories(
    include
)

set(SOURCES
    src/main.cpp
    src/pila.cpp
)

set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -Wextra -Wno-c++98-compat -Wno-padded -O2")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(pila.exe ${SOURCES})
