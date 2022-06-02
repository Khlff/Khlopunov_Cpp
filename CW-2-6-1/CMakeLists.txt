cmake_minimum_required(VERSION 3.20)
project(Khlopunov_Cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CW-2-6-1
        CW-2-6-1.cpp BusStop.cpp BusStop.h Solution.cpp Solution.h)