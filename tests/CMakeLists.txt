cmake_minimum_required(VERSION 3.10)

project(MyProjectTests VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

add_executable(TestExecutable test_utils.cpp)
target_link_libraries(TestExecutable PRIVATE UtilsLib)

