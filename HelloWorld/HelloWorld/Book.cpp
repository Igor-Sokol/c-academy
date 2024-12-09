#include "Book.h"
#include <iostream>

Book::Book(std::string title, std::string author, int year, char isbn[])
{
	this->title = title;
	this->author = author;
	this->year = year;

	int size = getStringSize(isbn);
	this->isbn = new char[size];
	memcpy(this->isbn, isbn, size);
}

Book::Book(const Book& book)
{
	title = book.title;
	author = book.author;
	year = book.year;

	int size = getStringSize(book.isbn);
	this->isbn = new char[size];
	memcpy(this->isbn, book.isbn, size);
}

Book::~Book()
{
	delete[] isbn;
}

std::string Book::getTitle()
{
	return title;
}

std::string Book::getAuthor()
{
	return author;
}

int Book::getYear()
{
	return year;
}

char* Book::getISBN()
{
	return isbn;
}

void Book::printInfo()
{
	using namespace std;

	cout << "Название - " << title << endl;
	cout << "Автор - " << author << endl;
	cout << "Год издания - " << year << endl;
	cout << "ISBN - " << isbn << endl;
}

int Book::getStringSize(char* str)
{
	int size = 1;
	for (size_t i = 0; str[i] != 0; i++)
	{
		size++;
	}


	return size;
}
