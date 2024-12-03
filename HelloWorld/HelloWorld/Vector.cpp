#include "Vector.h"
#include <vector>
#include <iostream>

int Random(int min, int maxIncluding)
{
	return rand() % (maxIncluding - min + 1) + min;
}

void PrintVector()
{
	std::vector<int> vector;

	std::cout << "Данные вектора: ";
	for (int i = 0; i < 10; i++)
	{
		vector.push_back(Random(1, 100));
		std::cout << vector[i] << ' ';
	}
	std::cout << std::endl;

	std::cout << "Отсортированный вектор: ";
	for (int i = 0; i < vector.size(); i++)
	{
		for (int j = i; j < vector.size(); j++)
		{
			if (vector[i] > vector[j])
			{
				int temp = vector[i];
				vector[i] = vector[j];
				vector[j] = temp;
			}
		}

		std::cout << vector[i] << ' ';
	}
}