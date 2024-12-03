#include "Matrix.h"

void FillMatrix(int size, int** matrix)
{
	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];

		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = i * j;
		}
	}
}

void PrintMatrix(int size, int** matrix)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

void PrintMatrix()
{
	int size = 3;

	int** matrix = new int* [size];

	FillMatrix(size, matrix);

	PrintMatrix(size, matrix);

	for (int i = 0; i < size; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}
