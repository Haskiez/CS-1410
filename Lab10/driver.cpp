// Course: CS 1410
// Instructor: Professor Wagstaff
// File: lab10.cpp
// Contents: Lab #10 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ---------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

// Name: countAs
// Purpose: To use recursion to count the A's in a string
// Parameters: A string (the user's string)
// Returns: An int (the number of A's)
int countAs(const string& str)
{
	string newStr;
	if (str == "")
	{
		return 0;
	}
	else if (str != "")
	{
		newStr = str.substr(1);
		if (str[0] == 'a')
		{
			return 1 + countAs(newStr);
		}
		else
		{
			return countAs(newStr);
		}
	}
	else
	{
		cout << "There was a problem" << endl;
	}
}

int main()
{
	// ask user for a string
	cout << "Please type a string." << endl;

	// Create a variable to store user input and store it
	string userString;
	getline(cin, userString);

	// Variable to store the number of A's
	int numA = 0;
	numA = countAs(userString);

	// output the amount of a's in string
	cout << "The amount of A's in your string was: " << numA << endl;

	// End Program
	system("pause");
	return 0;
}
