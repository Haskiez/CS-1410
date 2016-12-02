// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: Book.cpp
// Contents: Project #5 Programming Assignment
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
// Name: Book()
// Purpose: To create a book object with default values
// Parameters: None
// Returns: None
Book::Book()
{
	author = new Author();
	title = "Unknown Title";
	numPages = -1;
	price = -1.0;
}

// Function Prologue
// Name: Book()
// Purpose: To create a book object with specified values
// Parameters: Author pointer, string for title, int for pages, double for price
// Returns: None
Book::Book(Author *inputAuthor, string inputTitle, int inputPages, double inputPrice)
{
	author = inputAuthor;
	title = inputTitle;
	numPages = inputPages;
	price = inputPrice;
}

// Function Prologue
// Name: getAuthor()
// Purpose: To return the value of the Author pointer in a book object
// Parameters: None
// Returns: Author pointer
Author* Book::getAuthor(void) const
{
	return author;
}

// Function Prologue
// Name: setAuthor()
// Purpose: To set the author pointer to specified values
// Parameters:an author pointer
// Returns: None
void Book::setAuthor(Author *inputAuthor)
{
	author->setName(inputAuthor->getName());
	author->setAddress(inputAuthor->getAddress());
}

// Function Prologue
// Name: getTitle()
// Purpose: To return the value stored in the title variable
// Parameters: None
// Returns: string title
string Book::getTitle(void) const
{
	return title;
}

// Function Prologue
// Name: setTitle()
// Purpose: To set the title variable to specified value
// Parameters: string input
// Returns: None
void Book::setTitle(string inputTitle)
{
	title = inputTitle;
}

// Function Prologue
// Name: getPages()
// Purpose: To return the value in pages variable
// Parameters: None
// Returns: int pages
int Book::getPages(void) const
{
	return numPages;
}

// Function Prologue
// Name: setPages()
// Purpose: To set the pages variable to a specified value
// Parameters: int pages
// Returns: None
void Book::setPages(int inputPages)
{
	numPages = inputPages;
}

// Function Prologue
// Name: getPrice()
// Purpose: To return the value in the price variable
// Parameters: None
// Returns: double price
double Book::getPrice() const
{
	return price;
}

// Function Prologue
// Name: setPrice()
// Purpose: To set the price variable to a specified value
// Parameters: double price
// Returns: None
void Book::setPrice(double inputPrice)
{
	price = inputPrice;
}

// Function Prologue
// Name: readData()
// Purpose: To create a book object from data read from the stream
// Parameters: ifstream objecct
// Returns: None
void Book::readData(ifstream& _inputStream)
{
	string t;
	string pg;
	string pr;
	getline(_inputStream, t);
	setTitle(t);
	try
	{
		getline(_inputStream, pg);
		setPages(stoi(pg));
		getline(_inputStream, pr);
		setPrice(stod(pr));
	}
	catch (invalid_argument)
	{
		throw Exceptions(2);
	}
}

// Function Prologue
// Name: writeData()
// Purpose: To write data from a book object to the stream
// Parameters: ofstream object
// Returns: None
void Book::writeData(ofstream& _outputStream)
{
	author->writeData(_outputStream);
	_outputStream << title << endl;
	_outputStream << numPages << endl;
	_outputStream << price << endl;
}

// Name: ~Book()
// Purpose: To delete a book object from the heap
// Parameters: None
// Returns: None
Book::~Book()
{
}
