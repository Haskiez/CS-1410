#include "Author.h"



// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: Author.cpp
// Contents: Project #5 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#include "Author.h"
#include "Exceptions.h"

// Function Prologue
// Name: Author()
// Purpose: To create a default Author object with default values
// Parameters: None
// Returns: None
Author::Author()
{
	name = "unknown";
	address = "123 Unknown Ln";
}

// Function Prologue
// Name: Author()
// Purpose: To create an author object with specified values
// Parameters: string for name, string for address
// Returns: None
Author::Author(string inputName, string inputAddress)
{
	name = inputName;
	address = inputAddress;
}

// Function Prologue
// Name: getName()
// Purpose: to return the value of the name variable
// Parameters: None
// Returns: string name
string Author::getName(void) const
{
	return name;
}

// Function Prologue
// Name: setName()
// Purpose: to set the name variable to a specified value
// Parameters: string input
// Returns: None
void Author::setName(string inputName)
{
	name = inputName;
}

// Function Prologue
// Name: getAddress()
// Purpose: to get the value of the adress variable
// Parameters: None
// Returns: string address
string Author::getAddress(void) const
{
	return address;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
void Author::setAddress(string inputAddress)
{
	address = inputAddress;
}

// Function Prologue
// Name: readData()
// Purpose: To readData from a stream into an Author object
// Parameters: ifstream object
// Returns: None
void Author::readData(ifstream& inputStream)
{
	string n;
	string a;
	if (getline(inputStream, n))
	{
		setName(n);
		getline(inputStream, a);
		setAddress(a);
	}
	else
	{
		throw Exceptions(3);
	}
}

// Function Prologue
// Name: writeData()
// Purpose: To write the data of an Author object to a file
// Parameters: ofstream object
// Returns: None
void Author::writeData(ofstream& outputStream)
{
	outputStream << name << endl;
	outputStream << address << endl;
}

// Name: ~Author()
// Purpose: Delete an Author Object
// Parameters: None
// Returns: None
Author::~Author()
{
}
