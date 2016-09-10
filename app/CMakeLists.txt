#app CMakeLists.txt
project(appProject LANGUAGES CXX C )

add_executable (app
	app.cpp
	stdafx.cpp
	stdafx.h
	targetver.h
	)

target_link_libraries(app
	dll
	feeDll)