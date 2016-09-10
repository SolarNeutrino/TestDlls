//FeeSource.cpp
#include <iostream>
extern "C" int Fee(int iData)
{
	std::cout << "Fee has " << iData << std::endl;
	return iData * 2;
}