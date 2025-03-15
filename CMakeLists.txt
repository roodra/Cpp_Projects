
cmake_minimum_required(VERSION 3.18) 

project(Main)

# Ensure CMake finds source files
include_directories(src)

# Add the library (mylib)
add_library(mylib STATIC src/mylib.cpp)

# Specify include directories for headers
target_include_directories(mylib PUBLIC src)

add_executable(Main src/main.cpp src/multiply.cpp src/Input_vec.cpp src/print_vec.cpp src/add.cpp src/mult.cpp src/euler.cpp src/displayMemoryUsage.cpp src/Stack.cpp src/car.cpp src/main.h)

# Ensure mylib is linked properly
target_link_libraries(Main PRIVATE mylib)