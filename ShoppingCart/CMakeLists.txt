cmake_minimum_required(VERSION 3.23)
project(ShoppingCart)

set(CMAKE_CXX_STANDARD 14)

add_executable(ShoppingCart main.cpp cart.cpp cart.h item.cpp item.h)
