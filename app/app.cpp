// app.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../dll/dll.h"
#include "../feeDll/feeDll.h"
#include <iostream>

int main()
{
	std::cout << "main entered.." << std::endl;
	int n = ndll;
	ndll = ++n;
	int s = fndll();
	int t = Foo();
	int w = Fee(t);
	std::cout << "main done.." << std::endl;
    return 0;
}

