cmake_minimum_required(VERSION 3.20)
project(20112021)

set(CMAKE_CXX_STANDARD 17)

add_executable(20112021 06112021.cpp 20112021.cpp MyOOR.cpp MyOOR.h NumberIsTooBigException.h
        NumberIsTooBigException.cpp NumberIsNegativeException.h NumberIsNegativeException.cpp 27112021.cpp Point2D.h Point2D.cpp)
