// Course: CS 1410
// Instructor: Professor Wagstaff
// File: MyVector.cpp
// Contents: Project #4 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#include "MyVector.h"

// Default Constructor: MyVector
// Purpose: To initailize default values for vector
// Parameters: None
// Returns: None
MyVector::MyVector()
{
	// Set the capacity, and size to default values and then create an array
	vectorCapacity = DEFAULT_CAPACITY;
	vectorSize = 0;
	vectorArray = new int[vectorCapacity];
}

// Parameterized Constructor: MyVector
// Purpose: To initialize values of an array for what the user needs
// Parameters: an integer capacity that tells how big the array should be
// Returns: None
MyVector::MyVector(int capacity)
{
	vectorCapacity = capacity;
	vectorSize = 0;
	vectorArray = new int[vectorCapacity];
}

// Name: size()
// Purpose: To return to the user the size of the vector (meaning how many values are in the vector currently)
// Parameters: None
// Returns: The size of the current vector as an integer
int MyVector::size()
{
	return vectorSize;
}

// Name: capacity()
// Purpose: To return the capacity of the vector (meaning how much possible space there is in the vector currently)
// Parameters: None
// Returns: the vector capacity as an interger
int MyVector::capacity()
{
	return vectorCapacity;
}

// Name: clear()
// Purpose: Clears the current vector and resets it to its default values (similiar to default constructor)
// Parameters: None
// Returns: None
void MyVector::clear()
{
	delete[] vectorArray;
	vectorCapacity = DEFAULT_CAPACITY;
	vectorSize = 0;
	vectorArray = new int[vectorCapacity];

}

// Name: push_back()
// Purpose: To add an integer value to the end of the current vector (if the vector is full, it doubles the size of it and then adds the value)
// Parameters: an integer that is supplied by the user
// Returns: None
void MyVector::push_back(int integer)
{
	// I need to add an integer value to the back of my array
	// If there is room I can just do it normally
	// If there isn't enough room I will need to make a new array, double its size and copy the contents of the old array
	if (vectorSize == vectorCapacity)
	{
		// Double the size of my array
		vectorCapacity = vectorCapacity * DOUBLE_VECTOR;

		// Create a tempArray to hold my values
		int *tempArray = new int[vectorCapacity];

		// copy my values into the temp array
		for (int i = 0; i < vectorSize; i++)
		{
			tempArray[i] = vectorArray[i];
		}

		// I need to delete the old array
		delete[] vectorArray;

		// Assign the temp array to the vector array spot
		vectorArray = tempArray;

		// now I need to store my new value into the new array
		vectorArray[vectorSize] = integer;

	}
	else
	{
		vectorArray[vectorSize] = integer;
		vectorSize++;
	}
}

// Name: at()
// Purpose: Returns to the user the value that is stored in a certain index of the vector
// Parameters: An integer index of where in the vector to return a value
// Returns: A value that is stored in the index specified
int MyVector::at(int index)
{
	if (index < 0)
	{
		// Throw an exception for being a negative number
	}
	else if (index >= vectorCapacity)
	{
		// Throw an exception for going outside the bounds of the array
	}
	else
	{
		return vectorArray[index];
	}
}

// Deconstructor: ~MyVector()
// Puropse: To delete the current vector
// Parameters: None
// Returns: None
MyVector::~MyVector()
{
	delete[] vectorArray;
}
