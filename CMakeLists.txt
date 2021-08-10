cmake_minimum_required(VERSION 3.18...3.20)
project(IDECLion)

set(CMAKE_CXX_STANDARD 20)
project(app VERSION 0.0.1)
find_package (Threads)
#find_package (SQLite3)

message("-- Linking SDL")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

#add_library(lib/sqlite3.lib)

include_directories(/lib)
link_directories(/lib)

if(WIN32)
add_library(sqlite3 STATIC lib/sqlite3.c lib/sqlite3.h lib/sqlite3ext.h)
else()
include_directories(${SQLITE3_INCLUDE_DIRS})
endif()


add_executable(IDECLion main.cpp src/Serialize.cpp src/Serialize.h
        src/Address/AddressIp.cpp src/Address/AddressIp.h src/SqlDb/Lite3.cpp src/SqlDb/Lite3.h)

target_link_libraries(IDECLion
        Threads::Threads
        sqlite3)
