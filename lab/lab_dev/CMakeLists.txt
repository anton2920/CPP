cmake_minimum_required(VERSION 3.14)
project(lab_dev)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp libs/libs.cpp libs/marr.cpp)
set(HEADER_FILES libs/libs.hpp libs/marr.hpp libs/libs_3.cpp)

add_executable(lab_dev ${SOURCE_FILES} ${HEADER_FILES})