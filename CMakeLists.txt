cmake_minimum_required(VERSION 3.20)
project(logicalAST)

set(CMAKE_CXX_STANDARD 17)

add_executable(logicalAST main.cpp logical_tree.h binary_operations.h basic_nodes.h comparison_operations.h unary_operations.h)
