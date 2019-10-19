cmake_minimum_required(VERSION 3.14)
project(lab_dev)

set(CMAKE_CXX_STANDARD 17)

set(STUDENT libs/student.cpp libs/student.hpp)
set(LIBS libs/libs.cpp libs/libs.hpp)
set(SLAU libs/slau.cpp libs/slau.hpp)
set(FRACTION libs/fraction.cpp libs/fraction.hpp)
set(VECTOR libs/vector.cpp libs/vector.hpp)

add_executable(lab_dev main.cpp ${LIBS} ${FRACTION} ${VECTOR})
target_link_libraries(lab_dev Sorting)