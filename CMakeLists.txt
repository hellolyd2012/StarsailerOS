# 创建于2024.11.1
# StarsailerOS Cmake文件
# 源码遵循GNU-GPLV2.0开源协议授权

cmake_minimum_required(VERSION 3.25)

project(StarsailerOS)

enable_language(C)
enable_language(CXX)
enable_language(ASM)

include_directories(${CMAKE_SOURCE_DIR}/Includes)

add_subdirectory(Boot) # 编译Boot

