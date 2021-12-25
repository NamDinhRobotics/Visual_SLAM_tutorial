find_package(Pangolin REQUIRED)
message(STATUS "Pangolin found: ${Pangolin_FOUND}")
# mes pangolin directory
message(STATUS "Pangolin_LIBRARIES path: ${Pangolin_LIBRARIES}")

add_executable(stereo stereoImage.cpp)
target_link_libraries(stereo ${OpenCV_LIBRARIES} ${Pangolin_LIBRARIES})