#pragma once
#include <string>
using namespace std;
class Book
{
private:
	string title;
	string author;
	double price;
public:
	Book();
	Book(string, string, double);
	string getTitle() const;
	void setTitle(string);
	string getAuthor() const;
	void setAuthor(string);
	double getPrice() const;
	void setPrice(double);
	~Book();
};

