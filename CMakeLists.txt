cmake_minimum_required(VERSION 3.16)
project(practice_repos)

set(CMAKE_CXX_STANDARD 20)

add_executable(practice_repos main_prog.cpp geometry/Shape.cpp geometry/Shape.h geometry/Peak.cpp geometry/Peak.h geometry/figures/Pyramid.cpp geometry/figures/Pyramid.h geometry/figures/Cube.cpp geometry/figures/Cube.h)