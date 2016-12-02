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

#include "Exceptions.h"


// Name:
// Purpose:
// Parameters:
// Returns:
Exceptions::Exceptions()
{
	message = "End of File exception.";
}

// Name:
// Purpose:
// Parameters:
// Returns:
Exceptions::Exceptions(int errorCode)
{
	if (errorCode == 1)
	{
		message = "Error: Could not open file.";
	}
	else if (errorCode == 2)
	{
		message = "Error: Could not read file.";
	}
	else if (errorCode == 3)
	{
		message = "End of File.";
	}
}

// Name:
// Purpose:
// Parameters:
// Returns:
string Exceptions::getMessage()
{
	return message;
}

// Name:
// Purpose:
// Parameters:
// Returns:
Exceptions::~Exceptions()
{
}
