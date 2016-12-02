// Course: CS 1410
// Instructor: Professor Wagstaff
// File: lab06.cpp
// Contents: Lab #06 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ---------------------------------------------------------

#include <iostream>
using namespace std;

// Reverser of a c-string
// Name: reverser()
// Purpose: To reverse a c-string
// Parameters: A c-string (array of chars)
// Returns: A pointer to a char
char* reverser(char _myString[])
{
	// Count the array until a null terminator is hit and store value in a variable
	int numOfChars = 0;
	do
	{
		if (_myString[numOfChars] != '\0')
		{
			numOfChars++;
		}
	} 
	while (_myString[numOfChars] != '\0');

	// Establish a pointer to the beginning char and the last char
	char* firstPtr = _myString;
	char* lastPtr = _myString + (numOfChars - 1);

	// Use a loop to switch the first and last chars and the move the pointers in by 1
	for (int i = 0; i < numOfChars / 2; i++)
	{
		char temp;
		temp = *firstPtr;
		*firstPtr = *lastPtr;
		*lastPtr = temp;
		firstPtr = firstPtr + 1;
		lastPtr = lastPtr - 1;
	}

	// return the char array (return the pointer to the first character)
	return lastPtr;
}

int main()
{
	// declare a c-string to reverse
	char myString[] = "Hello world!";

	// call the reverser function
	reverser(myString);

	// output the result
	cout << myString << endl;

	system("PAUSE");
	return 0;
}
