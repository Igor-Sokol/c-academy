#include <iostream>
#include "MultiplicationTable.h"
#include "Game.h"

int main()
{
    setlocale(LC_ALL, "RU");

    PrintMultiplicationTableFor();
    PrintMultiplicationTableWhile();
    PrintMultiplicationTableDoWhile();

    Play();
}