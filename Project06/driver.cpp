// Course: CS 1410
// Instructor: Professor Wagstaff
// File: project06.cpp
// Contents: Project #6 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------------------------------

#include "project06.h"

int main()
{
	// Variables needed for project
	string beingSearched;
	string finding;
	int index;

	// Prompt user for two strings to search
	cout << "Please enter the string you would like to be searched." << endl;
	cout << ">> ";
	getline(cin, beingSearched);
	cout << "Please enter the string you would like to find in the previous." << endl;
	cout << ">> ";
	getline(cin, finding);

	// Use the index_of function to find the index where one string is in another
	index = index_of(beingSearched, finding);

	// Test
	cout << index << endl;

	// End Program
	system("pause");
	return 0;
}

// Name: index_of()
// Purpose: To return the index of a string in another string
// Parameters: two strings, one being searched using the other
// Returns: The index in which string 't' is in string 's'
int index_of(const string& s, const string& t)
{
	// index variable
	int index;

	// use recursiveFind to keep testing
	index = recursiveFind(s, t, 0);
	// Determine output
	if (index < 0)
	{
		cout << endl << "There were no instances of your string within the other. Invalid Index: ";
		return -1;
	}
	else
	{
		cout << "We have found string, " << "'" << t << "'" << " in string, " << "'" << s << "'" << " at index: ";
		return index;
	}
}

// Name: recursiveFind()
// Purpose: To help index_of find the index of a searched string using recursion
// Parameters: The two strings from index_of and the starting index.
// Returns: The index posistion 
int recursiveFind(const string& s, const string& t, int index)
{
	// If s become shorter than t then we are done
	if ((s.length() - index) < t.length())
	{
		return -1;
	}
	// If s is shortened, check if it matches t, if so, return the current index
	else if (s.substr(index, t.length()) == t)
	{
		return index;
	}
	// If nothing else then call recursiveFind again and run through all of s
	else
	{
		return recursiveFind(s, t, index + 1);
	}
	return -1;
}
