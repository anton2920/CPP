cmake_minimum_required(VERSION 3.14)
project(lab_dev)

set(CMAKE_CXX_STANDARD 17)

set(STUDENT libs/student.cpp libs/student.hpp)
set(LIBS libs/libs.cpp libs/libs.hpp)

add_executable(lab_dev main.cpp ${STUDENT} ${LIBS})
target_link_libraries(lab_dev Sorting)