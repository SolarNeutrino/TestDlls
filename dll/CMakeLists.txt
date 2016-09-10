#dll CMakeLists.txt
project(dllProject LANGUAGES CXX C )

# basic shared lib
add_library(dll SHARED
	dll.cpp
	dllmain.cpp
	stdafx.cpp
	dll.h
	stdafx.h
	targetver.h
	#this is needed to export routines from dllStatic
	Source.def
	)

# Need dllStatic
target_link_libraries(dll
	dllStatic
	)

# need to have dll tell that it is exporting
target_compile_definitions(dll PRIVATE DLL_EXPORTS)