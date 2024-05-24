#include "Operation_ProvidedAndRequiredInterfaceEnvironment.h"
#include <iostream>

using namespace std;
static void printUsage()
{
	std::cout <<
		"=============================================================================================\n" <<
		"USAGE: <program-name> <behavior-name> [<behavior-name> <behavior-name> <behavior-name> <...>]\n" <<
		"=============================================================================================\n" <<
		std::endl;
}

int main(int argc, char* argv[])
{		if(argc == 1)
	{
		std::cerr << "[ERROR] Must declare at least one behavior name.\n" << std::endl;
		printUsage();
		return -1;
	}

	for(int i = 1; i < argc; i++)
	{
		Operation_ProvidedAndRequiredInterface::Operation_ProvidedAndRequiredInterfaceEnvironment::Instance()->execute(argv[i]);
	}

	return 0;
}
