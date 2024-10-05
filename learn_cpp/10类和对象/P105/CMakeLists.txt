cmake_minimum_required(VERSION 3.0)

project(Circle)

include_directories(include)

add_executable(main_cmake main.cpp src/circle.cpp src/point.cpp)
