#include "UniquePtr.h"
#include <memory>
#include <iostream>

void CreateArrayAndPrint()
{
	using namespace std;

	int size = 10;
	unique_ptr<int[]> ptr = make_unique<int[]>(size);

	cout << "Введите 10 элементов" << endl;

	for (size_t i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}

	PrintArray(ptr, size);
}

void PrintArray(std::unique_ptr<int[]> &ptr, int size)
{
	using namespace std;

	for (size_t i = 0; i < size; i++)
	{
		cout << ptr[i] << ' ';
	}
}