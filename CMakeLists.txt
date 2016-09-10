# top needs to define minimin
cmake_minimum_required(VERSION 3.3.1)

#top level project
project (training LANGUAGES CXX C)

#Testing added
enable_testing()

# set the common output location
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(ARCHIVE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

if(MSVC)
	#this globally use static runtime library
	set(CMAKE_CXX_FLAGS_RELEASE "/MT")
	set(CMAKE_CXX_FLAGS_DEBUG "/MTd")
endif()

# could do all here or let each do their own

add_subdirectory (feeDll)
add_subdirectory (dllstatic)
add_subdirectory (dll)
add_subdirectory (app)

add_subdirectory(AppTest)