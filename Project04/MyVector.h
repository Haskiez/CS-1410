// Course: CS 1410
// Instructor: Professor Wagstaff
// File: MyVector.h
// Contents: Project #4 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#pragma once

const int DEFAULT_CAPACITY = 2;
const int DOUBLE_VECTOR = 2;

class MyVector
{
private:
	int vectorCapacity;
	int vectorSize;
	int *vectorArray;

public:
	// Default Constructor: MyVector
	// Purpose: To initailize default values for vector
	// Parameters: None
	// Returns: None
	MyVector();

	// Parameterized Constructor: MyVector
	// Purpose: To initialize values of an array for what the user needs
	// Parameters: an integer capacity that tells how big the array should be
	// Returns: None
	MyVector(int capacity);

	// Name: size()
	// Purpose: To return to the user the size of the vector (meaning how many values are in the vector currently)
	// Parameters: None
	// Returns: The size of the current vector as an integer
	int size();

	// Name: capacity()
	// Purpose: To return the capacity of the vector (meaning how much possible space there is in the vector currently)
	// Parameters: None
	// Returns: the vector capacity as an interger
	int capacity();

	// Name: clear()
	// Purpose: Clears the current vector and resets it to its default values (similiar to default constructor)
	// Parameters: None
	// Returns: None
	void clear();

	// Name: push_back()
	// Purpose: To add an integer value to the end of the current vector (if the vector is full, it doubles the size of it and then adds the value)
	// Parameters: an integer that is supplied by the user
	// Returns: None
	void push_back(int integer);

	// Name: at()
	// Purpose: Returns to the user the value that is stored in a certain index of the vector
	// Parameters: An integer index of where in the vector to return a value
	// Returns: A value that is stored in the index specified
	int at(int index);

	// Deconstructor: ~MyVector()
	// Puropse: To delete the current vector
	// Parameters: None
	// Returns: None
	~MyVector();
};
