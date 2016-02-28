cmake_minimum_required (VERSION 2.8.11)

project(MyWnd)

set(SOURCE_FILE
	src/MyWnd.h
	src/MyWnd.cpp
	src/main.cpp
)

include_directories(MyWnd)

add_executable(MyWnd ${SOURCE_FILE})

set(EXECUTABLE_OUTPUT_PATH bin2)
