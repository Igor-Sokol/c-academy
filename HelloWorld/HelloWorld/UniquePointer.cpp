#include "UniquePointer.h"
#include <memory>
#include <iostream>

void UniquePointer()
{
	int size = 10;

	std::unique_ptr<int[]> ptr = std::make_unique<int[]>(size);

	std::cout << "������� ��������" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> ptr[i];
	}

	for (int i = 0; i < size; ++i)
	{
		std::cout << ptr[i] << ' ';
	}
	std::cout << std::endl;

	int min = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] < min)
		{
			min = ptr[i];
		}
	}
	std::cout << "����������� ������� - " << min << std::endl;


	int max = INT_MIN;
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] > max)
		{
			max = ptr[i];
		}
	}
	std::cout << "������������ ������� - " << max << std::endl;
}