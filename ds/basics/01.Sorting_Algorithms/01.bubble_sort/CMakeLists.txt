cmake_minimum_required(VERSION 3.10)

project(BubbleSort)

# 设置 C++ 标准为 C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含源文件目录
include_directories(${PROJECT_SOURCE_DIR}/src)

# 查找所有源文件
file(GLOB SOURCES "src/*.cpp")

# 添加可执行文件
add_executable(BubbleSort ${SOURCES})