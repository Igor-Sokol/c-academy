#include <iostream>
#include <vector>
#include "SharedPtr.h"

void SharedPtr::CreateArrayAndPrint()
{
	using namespace std;
	int size = 10;

	shared_ptr<int[]> s_ptr(new int[size]);

	cout << "Введите " << size << " элементов" << endl;

	for (size_t i = 0; i < size; i++)
	{
		cin >> s_ptr[i];
	}

	PrintSum(s_ptr, size);
	auto e = GetMinAndMaxAndPrint(s_ptr, size);

	cout << "Минимальное: " << e.min << endl;
	cout << "Максимальное: " << e.max << endl;
}

void PrintSum(std::weak_ptr<int[]> w_ptrArray, int size)
{
	using namespace std;
	int sum = 0;

	auto array = w_ptrArray.lock();

	for (size_t i = 0; i < size; i++)
	{
		sum += array[i];
	}

	cout << "Сумма элементов: " << sum << endl;
}

ArrayElements GetMinAndMaxAndPrint(std::weak_ptr<int[]> w_ptrArray, int size)
{
	using namespace std;

	ArrayElements elements;

	elements.min = INT_MAX;
	elements.max = INT_MIN;

	auto array = w_ptrArray.lock();

	for (size_t i = 0; i < size; i++)
	{
		if (elements.min > array[i])
		{
			elements.min = array[i];
		}

		if (elements.max < array[i])
		{
			elements.max = array[i];
		}
	}

	return elements;
}