#include <iostream>
#include "Book.h"

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Ru");

	std::string title;
	std::string author;
	int year = 0;
	char* isbn = new char[10];

	cout << "Введите название: ";
	cin >> title;

	cout << "Введите автора: ";
	cin >> title;

	cout << "Введите год издательства: ";
	cin >> year;

	cout << "Введите ISBN: ";
	cin >> isbn;

	Book book(title, author, year, isbn);
	delete[] isbn;


	book.printInfo();
}