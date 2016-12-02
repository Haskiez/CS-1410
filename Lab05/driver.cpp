// Course: CS 1410
// Instructor: Professor Wagstaff
// File: driver.cpp
// Contents: Lab #05 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ---------------------------------------------------------

#include "driver.h"

int main()
{
	//Declare an integer value to store the user's input.
	int userInput;
	int square;

	//(1) Prompt the user to enter a positive, non - zero integer value.
	cout << "Please enter a non-zero, positive integer." << endl;
	cout << ">> ";
	cin >> userInput;

	//(2) Pass this value to a function named calculateSquare.
	try
	{
		square = calculateSquare(userInput);
	}
	catch (Exceptions e)
	{
		e.getError();
		// End Program
		system("pause");
		return 0;
	}
	catch (...)
	{
		cout << "Unknown error." << endl;
		// End Program
		system("pause");
		return 0;
	}

	cout << userInput << " squared is " << square << endl;

	// End Program
	system("pause");
	return 0;

}

// Calculate Square
// Name: calculateSquare()
// Purpose: To calculate the square of a number, unless it is a negative number or 0
// Parameters: A number (n)
// Returns: An int (n squared)
int calculateSquare(int n)
{
	// Check if it is a negative number
	if (n < 0)
	{
		throw Exceptions(n);
	}
	else if (n == 0)
	{
		throw Exceptions(n);
	}
	else
	{
		return n*n;
	}
}
