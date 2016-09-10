#dllstatic CMakeLists.txt
project(dllstaticProject LANGUAGES CXX C )

# basic static lib
add_library(dllStatic STATIC
	Source.cpp
	)

# need to have dll tell that it is exporting
target_compile_definitions(dllStatic PRIVATE DLL_EXPORTS)