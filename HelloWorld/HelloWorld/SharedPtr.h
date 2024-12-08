#pragma once

struct ArrayElements
{
	int min;
	int max;
};

namespace SharedPtr
{
	void CreateArrayAndPrint();
}

void PrintSum(std::weak_ptr<int[]> w_ptrArray, int size);
ArrayElements GetMinAndMaxAndPrint(std::weak_ptr<int[]> w_ptrArray, int size);