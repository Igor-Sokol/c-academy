#include "Reverse.h"
#include <iostream>

namespace Reverse
{
	void Run()
	{
		using namespace std;

		cout << "Введите текст" << endl;
		std::string str;
		cin >> str;
		
		int lenght = str.length();
		char* string = new char[lenght + 1];
		
		for (size_t i = 0; i < lenght; i++)
		{
			string[i] = str[i];
		}
		string[lenght] = 0;

		ReverseString(string);

		cout << "Перевернутая строка: " << string << endl;

		delete[] string;
	}

	void ReverseString(char* string)
	{
		int stringLastElement = 0;

		for (int i = 0; string[i] != 0; ++i)
		{
			stringLastElement = i;
		}

		int halfLength = stringLastElement / 2;
		for (int i = 0; i <= halfLength; ++i)
		{
			char temp = string[i];
			string[i] = string[stringLastElement - i];
			string[stringLastElement - i] = temp;
		}
	}
}