cmake_minimum_required(VERSION 3.2)
project(ch07)
# CMAKE_CXX_STANDARD 14
set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV REQUIRED)
message(STATUS "OpenCV found: ${OpenCV_INCLUDE_DIRS}")
message(STATUS "OpenCV library: ${OpenCV_LIBS}")

add_executable(orb_cv orb_cv.cpp)
target_link_libraries(orb_cv ${OpenCV_LIBS})