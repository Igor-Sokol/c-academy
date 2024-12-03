#include <iostream>
#include "Reverse.h"
#include "Matrix.h"
#include "Vector.h"
#include "UniquePointer.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    Reverse::Run();
    Matrix::PrintMatrix();
    PrintVector();
    UniquePointer();
}