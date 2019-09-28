cmake_minimum_required(VERSION 3.14)
project(lab_dev)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp libs/libs_2.cpp libs/libs_3.cpp libs/marr.cpp libs/menu.cpp)
set(HEADER_FILES libs/libs.hpp libs/libs_2.hpp libs/libs_3.hpp libs/marr.hpp)

add_executable(lab_dev ${SOURCE_FILES} ${HEADER_FILES})