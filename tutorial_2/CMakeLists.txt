cmake_minimum_required (VERSION 2.8.11)

project(WTLWindow)

set(SOURCE_FILE
	src/WTLWindow.h
	src/WTLWindow.cpp
	src/main.cpp
)

include_directories(WTLWindow)

add_executable(WTLWindow ${SOURCE_FILE})

set(EXECUTABLE_OUTPUT_PATH bin)
