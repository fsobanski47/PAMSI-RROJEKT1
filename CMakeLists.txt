cmake_minimum_required(VERSION 3.27)
project(PROJEKT1)

set(CMAKE_CXX_STANDARD 17)

add_executable(PROJEKT1 main.cpp
        stack.cpp
        stack.h
        cmake-build-debug/packet.cpp
        cmake-build-debug/packet.h)
