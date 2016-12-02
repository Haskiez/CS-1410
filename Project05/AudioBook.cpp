// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: AudioBooks.cpp
// Contents: Project #5 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#include "AudioBook.h"


// Default Constructor
// Purpose: To create an audio book with default values
// Parameters: None
// Returns: None
AudioBook::AudioBook()
{
	length = -1;
}


// Parameterized Constructor
// Purpose: Creates an audio book with specified values
// Parameters: Author pointer, string for title, int for pages, double for price, int for minutes
// Returns: None
AudioBook::AudioBook(Author* _author, string _title, int _pages, double _price, int _minutes) : Book(_author, _title, _pages, _price)
{
	length = _minutes;
}

// getLength()
// Purpose: Returns the value stored in the length variables
// Parameters: None
// Returns: int length
int AudioBook::getLength()
{
	return length;
}

// setLength()
// Purpose: To set teh length to a specified value
// Parameters: int length
// Returns: None
void AudioBook::setLength(int _length)
{
	length = _length;
}

// readData()
// Purpose: To readData from the stream to an audio book object
// Parameters: ifstream object
// Returns: None
void AudioBook::readData(ifstream& _inputStream)
{
	string tempLength;
	Book::readData(_inputStream);
	try
	{
		getline(_inputStream, tempLength);
		setLength(stoi(tempLength));
	}
	catch (invalid_argument)
	{
		throw Exceptions(2);
	}
}

// writeData()
// Purpose: To write data to the stream from an audio book object
// Parameters: ofstream object
// Returns: None
void AudioBook::writeData(ofstream& _outputStream) // This is not being called, just writing book info to file
{
	author->writeData(_outputStream);
	_outputStream << title << endl;
	_outputStream << numPages << endl;
	_outputStream << price << endl;
	_outputStream << length << endl;
}

// ~AudioBooks()
// Purpose: To delete an audio book object
// Parameters: None
// Returns: None
AudioBook::~AudioBook()
{
}
