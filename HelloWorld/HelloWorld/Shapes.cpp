#include <iostream>
#include "Shapes.h"

namespace Shapes
{
	void PrintShape(Shape shape)
	{
		using namespace std;
		using namespace Shapes;

		switch (shape)
		{
		case Shape::CIRCLE:
			cout << "CIRCLE" << endl;
			break;
		case Shape::SQUARE:
			cout << "SQUARE" << endl;
			break;
		case Shape::TRIANGLE:
			cout << "TRIANGLE" << endl;
			break;
		default:
			break;
		}
	}

	Shape GetShape(std::string shape)
	{
		using namespace std;
		using namespace Shapes;

		for (int i = 0; i < shape.length(); i++)
		{
			shape[i] = toupper(shape[i]);
		}

		if (shape == "CIRCLE")
		{
			return Shape::CIRCLE;
		}

		if (shape == "SQUARE")
		{
			return Shape::SQUARE;
		}

		if (shape == "TRIANGLE")
		{
			return Shape::TRIANGLE;
		}
	}
}