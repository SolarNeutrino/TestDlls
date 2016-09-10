#define DLL_EXPORTS
#include "../dll/dll.h"
DLL_API int Foo(void)
{
	int n = 33;
	return n;
}