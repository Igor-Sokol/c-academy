#pragma once


#define DEBUG

#ifdef DEBUG
float CalculateFactorial(float a);
#else
int CalculateFactorial(int a);
#endif