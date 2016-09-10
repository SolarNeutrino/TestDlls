#dll CMakeLists.txt
project(dllProject LANGUAGES CXX C )


# basic shared lib
set(SRC_COMMON 
	dll.cpp
	stdafx.cpp
	dll.h
	stdafx.h
	targetver.h
	)

if(MSVC)
set(SRC_OS 
	dllmain.cpp
	#this is needed to export routines from dllStatic
	Source.def
	)
else()
endif()

add_library(dll SHARED
	${SRC_COMMON}
	${SRC_OS}
	)

# Need dllStatic
target_link_libraries(dll
	dllStatic
	)

# need to have dll tell that it is exporting
target_compile_definitions(dll PRIVATE DLL_EXPORTS)