cmake_minimum_required(VERSION 3.14)
project(lab_dev)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp libs/libs.cpp)
set(HEADER_FILES libs/libs.hpp)

add_executable(lab_dev ${SOURCE_FILES} ${HEADER_FILES})