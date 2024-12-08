#include "OverloadFunction.h"

void print(int value)
{
	std::cout << typeid(int).name() << " - " << value << std::endl;
}

void print(float value)
{
	std::cout << typeid(float).name() << " - " << value << std::endl;
}

void print(std::string value)
{
	std::cout << typeid(std::string).name() << " - " << value << std::endl;
}

void print(char* value)
{
	std::cout << typeid(char*).name() << " - " << value << std::endl;
}

void print(int* value)
{
	std::cout << typeid(int*).name() << " - " << value << std::endl;
}

void print(std::vector<int> value)
{
	std::cout << typeid(std::vector<int>).name() << " - ";

	for (size_t i = 0; i < value.size(); i++)
	{
		std::cout << value[i];
	}
}

void print(std::shared_ptr<int> value)
{
	std::cout << typeid(std::shared_ptr<int>).name() << " - " << value << std::endl;
}

void print(std::unique_ptr<double> value)
{
	std::cout << typeid(std::unique_ptr<double>).name() << " - " << value << std::endl;
}
