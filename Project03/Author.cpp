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

#include "Author.h"
#include "Exceptions.h"

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
Author::Author()
{
	name = "unknown";
	address = "123 Unknown Ln";
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
Author::Author(string inputName, string inputAddress)
{
	name = inputName;
	address = inputAddress;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
string Author::getName(void) const
{
	return name;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
void Author::setName(string inputName)
{
	name = inputName;
}

// Function Prologue
// Name:
// Purpose:
// Parameters:
// Returns:
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
// Name:
// Purpose:
// Parameters:
// Returns:
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
// Name:
// Purpose:
// Parameters:
// Returns:
void Author::writeData(ofstream& outputStream)
{
	outputStream << name << endl;
	outputStream << address << endl;
}

// Name:
// Purpose:
// Parameters:
// Returns:
Author::~Author()
{
}
