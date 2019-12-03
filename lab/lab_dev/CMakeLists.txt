cmake_minimum_required(VERSION 3.14)
project(lab_dev)

set(CMAKE_CXX_STANDARD 17)

set(LIBS libs/libs.cpp libs/libs.hpp)
set(STPR libs/st_pr.cpp libs/st_pr.hpp)
set(CSAS libs/csas.cpp libs/csas.hpp)
set(CTS libs/cts.cpp libs/cts.hpp)
set(IS libs/is.cpp libs/is.hpp)

set(LIST libs/list.hpp)

add_executable(lab_dev main.cpp ${LIBS} ${LIST})
target_link_libraries(lab_dev m)