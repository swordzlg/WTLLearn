cmake_minimum_required (VERSION 2.8.11)

project(MyWnd)

set(SOURCE_FILE
	src/MyWnd.h
	src/main.cpp
)

include_directories(src)

add_executable(MyWnd ${SOURCE_FILE})

set(EXECUTABLE_OUTPUT_PATH bin1)
