// dll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "dll.h"
#include <iostream>

// This is an example of an exported variable
DLL_API_SYMBOL int ndll=0;

// This is an example of an exported function.
DLL_API int fndll(void)
{
	std::cout << "fndll called " << std::endl;
    return 42;
}

