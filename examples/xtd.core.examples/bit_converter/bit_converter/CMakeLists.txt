cmake_minimum_required(VERSION 3.20)

project(bit_converter)
find_package(xtd REQUIRED)
add_sources(README.md src/bit_converter.cpp)
target_type(CONSOLE_APPLICATION)
