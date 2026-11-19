cmake_minimum_required(VERSION 4.2)
project(webserver)

set(CMAKE_CXX_STANDARD 20)

add_executable(_ src/main.cpp
        include/project_info.h
        src/project_info.cpp)
