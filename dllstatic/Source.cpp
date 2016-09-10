//#define DLL_EXPORTS
// do in project
#include <iostream>
#include "../dll/dll.h"
DLL_API int Foo(void)
{
	std::cout << "Foo called " << std::endl;
	int n = 33;
	return n;
}