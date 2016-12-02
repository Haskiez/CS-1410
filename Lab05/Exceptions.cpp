// Course: CS 1410
// Instructor: Professor Wagstaff
// File: Exceptions.cpp
// Contents: Lab #05 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ---------------------------------------------------------

#include "Exceptions.h"


// Default Constructor
// Name: Exceptions()
// Purpose: To set the error code to a default value
// Parameters: None
// Returns: None
Exceptions::Exceptions()
{
	error = 0;
}

// Parameterized Constructor
// Name: Exceptions(int)
// Purpose: To set the error code to what has occurred
// Parameters: the error that occurred as an int
// Returns: None
Exceptions::Exceptions(int _error)
{
	error = _error;
}

// Handler for a negative number
// Name: negativeException()
// Purpose: To inform the user if this error occurred
// Parameters: None
// Returns: None
void Exceptions::getError()
{
	cout << "It seems you entered an invalid number. You entered: " << error << endl;
}

// Deconstructor
// Name: ~Exceptions()
// Purpose: To deconstruct an exceptions object
// Parameters: None
// Returns: None
Exceptions::~Exceptions()
{
}
