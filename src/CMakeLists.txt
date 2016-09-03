cmake_minimum_required(VERSION 2.8)

project (cmake_test)
set(CMAKE_BUILD_TYPE Release)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_library(cmake_test SHARED foo.cpp)
