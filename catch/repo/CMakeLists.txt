cmake_minimum_required(VERSION 2.6)
project(testCatch)

set(CMAKE_VERBOSE_MAKEFILE ON)

include_directories("/usr/local/include")
include_directories("${PROJECT_SOURCE_DIR}")

add_executable(
	testCatch 
	testCatch.cpp
)

target_compile_options(testCatch PRIVATE -std=c++17)