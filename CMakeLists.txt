cmake_minimum_required(VERSION 3.17)
project(FiguresProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Пути к заголовочным и исходным файлам
include_directories(include)

file(GLOB SOURCES
    src/*.cpp
    main.cpp
)

add_executable(figures ${SOURCES})
