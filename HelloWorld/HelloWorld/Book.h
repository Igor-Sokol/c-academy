#pragma once
#include <string>
class Book
{
public:
	Book(std::string title, std::string author, int year, char isbn[]);
	Book(const Book& book);
	~Book();

	std::string getTitle();
	std::string getAuthor();
	int getYear();
	char* getISBN();
	void printInfo();

private:
	int getStringSize(char* str);

	std::string title;
	std::string author;
	int year = 0;
	char* isbn = nullptr;
};

