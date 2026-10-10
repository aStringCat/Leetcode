cmake_minimum_required(VERSION 3.16)
project(solution LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 命令行默认启用调试信息；CLion 可以通过 CMake Profile 覆盖。
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

# 题目由 main.cpp 引入
add_executable(solution main.cpp leetcode.h)
