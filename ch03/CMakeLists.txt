cmake_minimum_required(VERSION 3.2)
project(ch03)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIRS})
message(STATUS "Eigen3 found" ${EIGEN3_INCLUDE_DIRS})

add_executable(eigenMatrix  eigenMatrix.cpp)