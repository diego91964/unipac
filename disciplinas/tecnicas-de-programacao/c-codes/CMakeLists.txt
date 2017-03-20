cmake_minimum_required(VERSION 3.6)
project(c_codes)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES cap8/04.c)
set(SOURCE_FILES cap8/05.c)
add_executable(c_codes ${SOURCE_FILES})