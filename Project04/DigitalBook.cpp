// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: DigitalBooks.cpp
// Contents: Project #5 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#include "DigitalBook.h"


// Default Constructor
// Name: DigitalBooks()
// Purpose: To set default values for digital book objects
// Parameters: None
// Returns: None
DigitalBook::DigitalBook()
{
	format = "No Format";
}

// Parameterized Constructor
// Name: DigitalBooks()
// Purpose: To set values of a digital book objects to specified values
// Parameters: Author pointer, string for title, int for pages, double for price, string for format
// Returns: None
DigitalBook::DigitalBook(Author *_author, string _title, int _pages, double _price, string _format) : Book(_author, _title, _pages, _price)
{
	format = _format;
}

// Getter for Format
// Name: getFormat()
// Purpose: To return the value in the format variable
// Parameters: None
// Returns: string format
string DigitalBook::getFormat()
{
	return format;
}

// Setter for Format
// Name: setFormat()
// Purpose: To set the value of the format variable
// Parameters: a string
// Returns: None
void DigitalBook::setFormat(string _format)
{
	format = _format;
}

// Name: readData()
// Purpose: To readData from the stream into a digital book object
// Parameters: an ifstream object
// Returns: None
void DigitalBook::readData(ifstream& _inputStream)
{
	Book::readData(_inputStream);
	string tempFormat;
	getline(_inputStream, tempFormat);
	setFormat(tempFormat);
}

// Name: writeData()
// Purpose: To write the data stored in a digital book to a file
// Parameters: an ofstream object
// Returns: None
void DigitalBook::writeData(ofstream& _outputStream)
{
	author->writeData(_outputStream);
	_outputStream << title << endl;
	_outputStream << numPages << endl;
	_outputStream << price << endl;
	_outputStream << format << endl;
}

// Deconstructor
// Name: ~DigitalBooks()
// Purpose: To delete a digital book object
// Parameters: None
// Returns: None
DigitalBook::~DigitalBook()
{
}
