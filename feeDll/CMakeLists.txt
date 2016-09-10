#feeDll CMakeLists.txt
project(feeDllProject LANGUAGES CXX C )


# basic shared lib
add_library(feeDll SHARED
	FeeSource.cpp
	feeDll.h
	#this is needed to export routines
	Source.def
	)