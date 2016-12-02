// Course: CS 1410
// Instructor: Professor Wagstaff
// File: driver.cpp
// Contents: Lab #11 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include "Money.h"
using namespace std;

// Global variables
int dollars;
int cents;
const int HUNDRED = 100;

// Operator Overload '<<'
// Name: operator<<()
// Purpose: Overloads the '<<' operator for money objects
// Parameters: The output stream and a money object
// Returns: The output stream
ostream& operator<<(ostream& out, const Money& _money)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	out << "$" << _money.getDollars() << "." << _money.getCents() << endl;
	return out;
}

// Name: convertToDandC
// Purpose: To do the conversion from userinput to dollars and cents for money object
// Parameters: a number as a double
// Returns: None
void convertToDandC(double n)
{
	// Make the double parameter into an int
	int nInt = n * HUNDRED;

	// Split into two variables, namely dollars and cents
	dollars = nInt / HUNDRED;
	cents = nInt % HUNDRED;
}

int main()
{
	// Variables needed for lab
	string userInputString;
	double userInputDouble;
	int userInputInt;
	
	// Ask user for a dollar and cents amount for the first money object
	cout << "Please enter your first dollar amount as a decimal." << endl;
	cout << ">> ";
	getline(cin, userInputString);
	userInputDouble = stod(userInputString);
	
	// Convert to Dollars and cents and store in an money object
	convertToDandC(userInputDouble);
	Money Obj1 = Money(dollars, cents);

	// Ask user for a dollar and cents amount for second money object
	cout << "Please enter your first dollar amount as a decimal." << endl;
	cout << ">> ";
	getline(cin, userInputString);
	userInputDouble = stod(userInputString);

	// Convert to Dollars and cents and store in an money object
	convertToDandC(userInputDouble);
	Money Obj2 = Money(dollars, cents);

	// Add the objects together
	Money added = Obj1 + Obj2;

	// Subtract the objects
	Money subtracted = Obj1 - Obj2;

	// Output results using overloaded stream insertion operator
	cout << "When added together you have: " << added << endl;
	cout << "When subtracted, you have: " << subtracted << endl;

	// End Program
	system("pause");
	return 0;
}
