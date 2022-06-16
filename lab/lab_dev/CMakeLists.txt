cmake_minimum_required(VERSION 3.14)
project(lab_dev)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -fopenmp")

add_executable(lab_dev main.cpp)
add_executable(knapsack knapsack.cpp)

#target_link_libraries(lab_dev m)
