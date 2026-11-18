cmake_minimum_required(VERSION 3.16)
project(cpp_parking_lot VERSION 0.1.0 LANGUAGES CXX)

add_executable(parking_lot src/main.cpp)
target_compile_features(parking_lot PRIVATE cxx_std_17)
target_include_directories(parking_lot PRIVATE include)
