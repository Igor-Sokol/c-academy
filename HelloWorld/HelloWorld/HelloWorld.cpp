#include <iostream>
#include "Shapes.h"

int main()
{
	Shapes::Shape shape = Shapes::GetShape("circle");

	PrintShape(shape);
}