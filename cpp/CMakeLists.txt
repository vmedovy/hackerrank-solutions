cmake_minimum_required(VERSION 3.17)
project(hackerrank-cpp)

set(CMAKE_CXX_STANDARD 14)

foreach (ID RANGE 1 6)
    add_executable(hackerrank-cpp-${ID} hackerrank-cpp-${ID}/main.cpp)
endforeach ()
