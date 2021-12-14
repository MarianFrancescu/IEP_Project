cmake_minimum_required(VERSION 3.2)
project(IEP_Project VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include_directories(app headers src)
add_executable(IEP_Project 
                app/headers/Car.h
                app/headers/Showroom.h
                app/headers/Manager.h
                app/src/Car.cpp
                app/src/Showroom.cpp
                app/src/Manager.cpp
                app/src/main.cpp
                )