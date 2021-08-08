cmake_minimum_required(VERSION 3.20)
project(IDECLion)

set(CMAKE_CXX_STANDARD 20)
project(app VERSION 0.0.1)
find_package (Threads)
find_package (SQLite3)

add_executable(IDECLion main.cpp src/Serialize.cpp src/Serialize.h
        src/Address/AddressIp.cpp src/Address/AddressIp.h)

target_link_libraries(IDECLion
        Threads::Threads
        sqlite3)
