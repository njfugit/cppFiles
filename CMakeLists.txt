cmake_minimum_required(VERSION 3.0)

project(Class_test)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(Class Class.cpp src/Time.cpp)