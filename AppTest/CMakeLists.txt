#AppTest CMakeLists.txt
project(AppTestProject LANGUAGES CXX C )

if(MSVC)
	set(GTEST_INCLUDE_DIRS "C:/Program Files (x86)/googletest-distribution/include/")
	set(GTEST_LIB "C:/Program Files (x86)/googletest-distribution/lib/gtest.lib" )
else()
	set(GTEST_LIB gtest pthread rt )
endif()

include_directories( 
    ${GTEST_INCLUDE_DIRS}
	)
add_executable (AppTest
	TestSource.cpp
	)

target_link_libraries(AppTest
	dll
	feeDll
	${GTEST_LIB}
	)



#add_test(MyTest AppTest)
add_test(NAME MyTest COMMAND $<TARGET_FILE:AppTest>)