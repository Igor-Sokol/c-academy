#pragma once

#include <memory>
#include <iostream>

void CreateArrayAndPrint();
void PrintArray(std::unique_ptr<int[]>& ptr, int size);