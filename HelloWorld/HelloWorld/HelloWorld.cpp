#include <iostream>
#include "Factorial.h"
#include "SystemInfo.h"
#include "CompilerInfo.h"

int main()
{
	std::cout << CalculateFactorial(5.7) << std::endl;

	GetSystemInfo();

	GetCompilerInfo();
}