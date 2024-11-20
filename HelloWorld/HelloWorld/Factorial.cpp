#include "Factorial.h"

#define DEBUG

#ifdef DEBUG
float CalculateFactorial(float a)
{
	float value = 1;
#else
int CalculateFactorial(int a)
{
	int value = 1;
#endif
	for (size_t i = a; i > 0; i--)
	{
		value *= i;
	}

	return value;
}