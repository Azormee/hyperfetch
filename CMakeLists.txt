cmake_minimum_required(VERSION 3.16)

project(HyperFetch LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(hyperfetch
    src/main.c
)

target_include_directories(hyperfetch PRIVATE include)
