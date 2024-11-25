#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "RU");

	int value = 0;

	cout << "Введите число" << endl;
	cin >> value;

	value > 0 && value % 2 == 0 ? value <<= 2 : value >>= 2;

	cout << "Результат - " << value << endl;
}