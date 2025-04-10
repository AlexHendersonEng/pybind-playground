# Set minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Set project name
project(my_pybind_module)

# Add pybind subdirectory
add_subdirectory("${CMAKE_SOURCE_DIR}/submodules/pybind11")

# Create the Python module
pybind11_add_module(my_module add.cpp)