// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: myProgram.cpp
// Contents: Lab #1 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#include "Book.h"
#include "Exceptions.h"

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
Book::Book()
{
	Author author;
	title = "Unknown Title";
	pages = -1;
	price = -1.0;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
Book::Book(Author inputAuthor, string inputTitle, int inputPages, double inputPrice)
{
	author.setName(inputAuthor.getName());
	author.setAddress(inputAuthor.getAddress());
	title = inputTitle;
	pages = inputPages;
	price = inputPrice;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
Author Book::getAuthor(void) const
{
	return author;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
void Book::setAuthor(Author inputAuthor)
{
	author.setName(inputAuthor.getName());
	author.setAddress(inputAuthor.getAddress());
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
string Book::getTitle(void) const
{
	return title;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
void Book::setTitle(string inputTitle)
{
	title = inputTitle;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
int Book::getPages(void) const
{
	return pages;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
void Book::setPages(int inputPages)
{
	pages = inputPages;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
double Book::getPrice() const
{
	return price;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
void Book::setPrice(double inputPrice)
{
	price = inputPrice;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
void Book::readData(ifstream& inputStream)
{
	string t;
	string pg;
	string pr;
	getline(inputStream, t);
	setTitle(t);
	try
	{
		getline(inputStream, pg);
		setPages(stoi(pg));
		getline(inputStream, pr);
		setPrice(stod(pr));
	}
	catch (invalid_argument)
	{
		throw Exceptions(2);
	}
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
void Book::writeData(ofstream& outputStream)
{
	author.writeData(outputStream);
	outputStream << title << endl;
	outputStream << pages << endl;
	outputStream << price << endl;
}

// Name:
// Purpose:
// Parameters:
// Returns:
Book::~Book()
{
}
