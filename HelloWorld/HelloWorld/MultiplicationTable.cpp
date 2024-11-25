#include <iostream>
#include "MultiplicationTable.h"

void PrintMultiplicationTableFor()
{
	using namespace std;

	for (int i = 1; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
}

void PrintMultiplicationTableWhile()
{
	using namespace std;

	int i = 1;
	while (i < 10)
	{
		int j = 1;
		while (j < 10)
		{
			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}
		cout << endl;

		i++;
	}
}

void PrintMultiplicationTableDoWhile()
{
	using namespace std;

	int i = 1;
	do
	{
		int j = 1;
		do
		{
			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		} while (j < 10);

		cout << endl;

		i++;
	} while (i < 10);
}