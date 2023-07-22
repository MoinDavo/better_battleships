cmake_minimum_required(VERSION 3.0)
project(better_battleships)
add_subdirectory(components)
add_executable(game main.cpp components)