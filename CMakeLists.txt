# This will set the minimum version of CMake required to generate the projects
# CMakeLists has its own language and features and as more and more versions are 
# added it will include new keywords and options
cmake_minimum_required(VERSION 3.18) 

# This will give our project a name
project(Main)

# This instructs CMake that we want to generate an executable file from this project
# Other options would be add_library but this is a topic for another time
# You can notice that we also pass on the path to our cpp file
add_executable(Main src/main.cpp src/multiply.cpp src/Input_vec.cpp src/print_vec.cpp src/main.h)