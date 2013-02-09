cmake_minimum_required (VERSION 2.8)
project (libmoon)
include_directories("include")

SET(CMAKE_C_COMPILER avr-gcc)
SET(CMAKE_CXX_COMPILER avr-gcc)

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ggdb3")

add_library(moon STATIC src/moon.c)

add_executable(main  test/test.c)
target_link_libraries(main moon)


