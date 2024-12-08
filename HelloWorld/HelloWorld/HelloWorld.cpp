#include <iostream>
#include "SharedPtr.h"
#include "OverloadFunction.h"

int main()
{
    setlocale(LC_ALL, "Ru");

    int* chars = new int[5];

    for (size_t i = 0; i < 5; i++)
    {
        chars[i] = i;
    }
    chars[4] = 0;

    print(chars);
}