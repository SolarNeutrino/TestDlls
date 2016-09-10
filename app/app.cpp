// app.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../dll/dll.h"

int main()
{
	int n = ndll;
	ndll = ++n;
	int s = fndll();
	int t = Foo();
    return 0;
}

