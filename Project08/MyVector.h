// Course: CS 1410
// Instructor: Professor Wagstaff
// File: MyVector.h
// Contents: Project #7 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#pragma once
#include <iostream>
using namespace std;

const int DEFAULT_CAPACITY = 2;
const int DOUBLE_VECTOR = 2;

template <class T>
class MyVector
{
private:
	int vectorCapacity;
	int vectorSize;
	T *vectorArray;

public:
	MyVector();
	MyVector(int capacity);
	MyVector(const MyVector& b);
	int size() const;
	int capacity() const;
	void clear();
	void push_back(T);
	T at(int index);
	MyVector<T>& operator=(MyVector<T>&);
	~MyVector();

};
// Default Constructor: MyVector
// Purpose: To initailize default values for vector
// Parameters: None
// Returns: None
template <class T>
MyVector<T>::MyVector()
{
	// Set the capacity, and size to default values and then create an array
	vectorCapacity = DEFAULT_CAPACITY;
	vectorSize = 0;
	vectorArray = new T[vectorCapacity];
}

// Parameterized Constructor: MyVector
// Purpose: To initialize values of an array for what the user needs
// Parameters: an integer capacity that tells how big the array should be
// Returns: None
template <class T>
MyVector<T>::MyVector(int capacity)
{
	vectorCapacity = capacity;
	vectorSize = 0;
	vectorArray = new int[vectorCapacity];
}

// Copy constructor
// Purpose: Copy the data into this vector
// Parameters: a MyVector object
// Returns: none
template <class T>
MyVector<T>::MyVector(const MyVector<T>& b)
{
	vectorCapacity = b.vectorCapacity;
	vectorSize = b.vectorSize;
	vectorArray = new T[vectorCapacity];
	for (int i = 0; i < vectorCapacity; i++)
	{
		this->vectorArray[i] = b.vectorArray[i];
	}
}

// Name: size()
// Purpose: To return to the user the size of the vector (meaning how many values are in the vector currently)
// Parameters: None
// Returns: The size of the current vector as an integer
template <class T>
int MyVector<T>::size() const
{
	return vectorSize;
}

// Name: capacity()
// Purpose: To return the capacity of the vector (meaning how much possible space there is in the vector currently)
// Parameters: None
// Returns: the vector capacity as an interger
template <class T>
int MyVector<T>::capacity() const
{
	return vectorCapacity;
}

// Name: clear()
// Purpose: Clears the current vector and resets it to its default values (similiar to default constructor)
// Parameters: None
// Returns: None
template <class T>
void MyVector<T>::clear()
{
	delete[] vectorArray;
	vectorCapacity = DEFAULT_CAPACITY;
	vectorSize = 0;
	vectorArray = new T[vectorCapacity];
}

// Name: push_back()
// Purpose: To add an integer value to the end of the current vector (if the vector is full, it doubles the size of it and then adds the value)
// Parameters: an integer that is supplied by the user
// Returns: None
template <class T>
void MyVector<T>::push_back(T value)
{
	// I need to add an integer value to the back of my array
	// If there is room I can just do it normally
	// If there isn't enough room I will need to make a new array, double its size and copy the contents of the old array
	if (vectorSize == vectorCapacity)
	{
		// Double the size of my array
		vectorCapacity = vectorCapacity * DOUBLE_VECTOR;

		// Create a tempArray to hold my values
		T *tempArray = new T[vectorCapacity];

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
		vectorArray[vectorSize] = value;

	}
	else
	{
		vectorArray[vectorSize] = value;
		vectorSize++;
	}
}

// Name: at()
// Purpose: Returns to the user the value that is stored in a certain index of the vector
// Parameters: An integer index of where in the vector to return a value
// Returns: A value that is stored in the index specified
template <class T>
T MyVector<T>::at(int index)
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
// TODO PAST HERE
template <class T>
MyVector<T>& MyVector<T>::operator=(MyVector<T>& rho)
{
	// test for self assignment
	if (this == &rho)
	{
		return *this;
	}
	// Clean up lho object
	delete[] this->vectorArray;

	// Create a new array just as big as the rho array
	this->vectorCapacity = rho.capacity();
	this->vectorSize = rho.vectorSize;
	this->vectorArray = new T[vectorCapacity];

	// Copy the data to the new vector
	for (int i = 0; i < vectorCapacity; i++)
	{
		*(vectorArray + i) = *(rho.vectorArray + i);
	}
}

// Deconstructor: ~MyVector()
// Puropse: To delete the current vector
// Parameters: None
// Returns: None
template <class T>
MyVector<T>::~MyVector()
{
	delete[] vectorArray;
}

// Overloaded << operator, so that we can see the vector
// Purpose: output a vector object
// Parameters: a stream and a MyVector object 
// Returns: the stream object
template <class T>
ostream& operator<<(ostream& theStream, MyVector<T>& aVector)
{
for (int i = 0; i < aVector.size(); i++)
{
	theStream << aVector.at(i) << " ";
}
return theStream;
}
