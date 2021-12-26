cmake_minimum_required(VERSION 3.2)
project(ch06)

find_package(Eigen3 REQUIRED)
message(STATUS "Found Eigen3: ${EIGEN3_VERSION}")
message(STATUS "Found EIGEN3_INCLUDE_DIRS: ${EIGEN3_INCLUDE_DIRS}")

add_executable(gaussNewton gaussNewton.cpp)