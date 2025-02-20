cmake_minimum_required(VERSION 3.10)

project(MyProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

# Create a lib from utils.cpp
add_library(UtilsLib utils.cpp)

add_executable(MyExecutable main.cpp)

#link the main exec with the utility library
target_link_libraries(MyExecutable PRIVATE UtilsLib)

add_subdirectory(tests)

