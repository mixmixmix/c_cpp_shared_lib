cmake_minimum_required(VERSION 2.8)

project (opencv_test)
set(CMAKE_BUILD_TYPE Release)
set ( CMAKE_PREFIX_PATH "/opt/opencv3/")

find_package( OpenCV REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIR})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(opencv_test SHARED foo_opencv.cpp)
target_link_libraries( opencv_test ${OpenCV_LIBS})
