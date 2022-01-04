cmake_minimum_required(VERSION 3.2)
project(ch07)
set(CMAKE_BUILD_TYPE "Release")
add_definitions("-DENABLE_SSE")

# CMAKE_CXX_STANDARD 14
set(CMAKE_CXX_FLAGS "-std=c++14 -O2 ${SSE_FLAGS} -msse4")

find_package(OpenCV REQUIRED)
message(STATUS "OpenCV found: ${OpenCV_INCLUDE_DIRS}")
message(STATUS "OpenCV library: ${OpenCV_LIBS}")

find_package(Eigen3 REQUIRED)
message(STATUS "Eigen3 found: ${EIGEN3_INCLUDE_DIRS}")

include_directories(${OpenCV_INCLUDE_DIRS} ${EIGEN3_INCLUDE_DIRS})

add_executable(orb_cv orb_cv.cpp)
target_link_libraries(orb_cv ${OpenCV_LIBS})

add_executable(orb_self orb_self.cpp)
target_link_libraries(orb_self ${OpenCV_LIBS})