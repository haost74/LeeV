cmake_minimum_required(VERSION 3.20)
project(IDECLion)

set(CMAKE_CXX_STANDARD 20)

add_executable(IDECLion main.cpp src/Serialize.cpp src/Serialize.h)
