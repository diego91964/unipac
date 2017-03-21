cmake_minimum_required(VERSION 3.6)
project(c_codes)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES cap8/04.c)
#set(SOURCE_FILES cap8/05.c)
#set(SOURCE_FILES cap8/06.c)
#set(SOURCE_FILES cap8/07.c)
#set(SOURCE_FILES cap8/08.c)
#set(SOURCE_FILES cap8/09.c)
set(SOURCE_FILES cap8/10.c)
add_executable(c_codes ${SOURCE_FILES})