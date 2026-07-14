cmake_minimum_required(VERSION 3.21)

project(QtProgramTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(QtProgramTest
    src/main.cpp
)

target_link_libraries(QtProgramTest PRIVATE Qt6::Widgets)