// app.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../dll/dll.h"
#include "../feeDll/feeDll.h"


int main()
{
	int n = ndll;
	ndll = ++n;
	int s = fndll();
	int t = Foo();
	int w = Fee(t);
    return 0;
}

