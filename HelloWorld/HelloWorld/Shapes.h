#pragma once

namespace Shapes
{
	enum class Shape
	{
		CIRCLE,
		SQUARE,
		TRIANGLE,
	};

	void PrintShape(Shape shape);
	Shape GetShape(std::string shape);
}