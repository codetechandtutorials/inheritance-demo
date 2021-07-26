# CMakeList.txt : CMake project for inheritance-demo, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("inheritance-demo")

# Add source to this project's executable.
add_executable (inheritance-demo
"inheritance-demo.cpp" "inheritance-demo.h"
"LivingBeing.h" "LivingBeing.cpp"
"Frog.h" "Frog.cpp"
"Lion.h" "Lion.cpp")

# TODO: Add tests and install targets if needed.
