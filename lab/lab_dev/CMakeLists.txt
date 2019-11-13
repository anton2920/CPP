cmake_minimum_required(VERSION 3.14)
project(lab_dev)

set(CMAKE_CXX_STANDARD 17)

set(LIBS libs/libs.cpp libs/libs.hpp)
set(ANIMAL libs/animal.cpp libs/animal.hpp)
set(PREDATOR libs/predator.cpp libs/predator.hpp)
set(USER libs/user.cpp libs/user.hpp)

add_executable(lab_dev main.cpp ${LIBS} ${ANIMAL} ${PREDATOR} ${USER})
target_link_libraries(lab_dev m)