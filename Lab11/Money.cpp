// Course: CS 1410
// Instructor: Professor Wagstaff
// File: Money.cpp
// Contents: Lab #11 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------------------------------

#include "Money.h"


// Default Constructor
// Name: Money()
// Purpose: To set dollars and cents values to default values
// Parameters: None
// Returns: None
Money::Money()
{
	dollars = -1;
	cents = 200;
}

// Parameterized Constructor
// Name: Money(int, int)
// Purpose: To set the values to dollars and cents
// Parameters: int _dollars, int _cents
// Returns: None
Money::Money(int _dollars, int _cents)
{
	dollars = _dollars;
	cents = _cents;
}

// Setter for Dollars
// Name: setDollars()
// Purpose: To set the dollar amount in a money object
// Parameters: an int representing the amount of dollars
// Returns: None
void Money::setDollars(int _dollars)
{
	dollars = _dollars;
}

// Getter for Dollars
// Name: getDollars()
// Purpose: To get the dollars of an object
// Parameters: None
// Returns: The value of dollars stored in an object
int Money::getDollars() const
{
	return dollars;
}

// Getter for Cents
// Name: getCents()
// Purpose: To get the cents of an object
// Parameters: None
// Returns: The value of cents stored in an object
int Money::getCents() const
{
	return cents;
}

// Setter for Cents
// Name: setCents()
// Purpose: To set the cents of a money object
// Parameters: an int representing cents
// Returns: None
void Money::setCents(int _cents)
{
	cents = _cents;
}

// Overloading Operator '+'
// Name: operator+(Money&)
// Purpose: To overload the '+' operator to add Money Objects
// Parameters: Money _moneyObject
// Returns: A money object
Money Money::operator+(const Money& _rightHandOperand)
{
	// Declare two variables to store the new values and one to reprsent cents conversion
	int newDollars;
	int newCents;
	const int HUNDRED = 100;

	// Add the current objects dollars and cents values with that of the other object
	newDollars = dollars + _rightHandOperand.getDollars();
	newCents = cents + _rightHandOperand.getCents();

	// If newCents >= 100, I need to increment dollar
	while (newCents >= HUNDRED)
	{
		newCents = newCents - HUNDRED;
		newDollars++;
	}

	// Create and return the new money object
	Money newMoneyObject = Money(newDollars, newCents);
	return newMoneyObject;
}

// Overloading Operator '-'
// Name: operator-(Money&)
// Purpose: To overload the '-' operator to subtract Money Objects
// Parameters: Money _moneyObject
// Returns: A money object
Money Money::operator-(const Money& _rightHandOperand)
{
	// Declare two variables to store the new values for dollars and cents
	int newDollars;
	int newCents;
	const int HUNDRED = 100;

	// Subtract the current objects dollars and cents values with that of the other object
	newDollars = dollars - _rightHandOperand.getDollars();
	newCents = cents - _rightHandOperand.getCents();

	if (newCents < 0 && newDollars > 0)
	{
		newCents = newCents * -1;
		newCents = HUNDRED - newCents;
		newDollars = newDollars--;
	}
	else if (newCents < 0 && newDollars <= 0)
	{
		newCents = newCents * -1;
	}

	// Create and return the new money object
	Money newMoneyObject = Money(newDollars, newCents);
	return newMoneyObject;
}

// Default Deconstructor
// Name: ~Money()
// Purpose: To deconstruct (delete) a money object
// Parameters: None
// Returns: None
Money::~Money()
{
}
