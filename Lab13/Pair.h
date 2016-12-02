// Course: CS 1410
// Instructor: Professor Wagstaff
// File: driver.cpp
// Contents: Lab #13 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -------------------------------------------------------

#pragma once
#include <string>
using namespace std;

template <class T>
class Pair
{
private:
	T a;
	T b;

public:
	Pair();
	Pair(T, T);
	T getFirst();
	T getSecond();
};


// Default Constructor
// Purpose: To give default values to the data members
// Parameters: None
// Returns: None
template <class T>
Pair<T>::Pair()
{

}

// Parameterized Constructor
// Purpose: To set the data members
// Parameters: Two things of some type
// Returns: None
template <class T>
Pair<T>::Pair(T first, T second)
{
	a = first;
	b = second;
}

// First Getter
// Purpose: Gets the value stored in the first data member (a)
// Parameters: None
// Returns: None
template <class T>
T Pair<T>::getFirst()
{
	return a;
}

// Second Getter
// Purpose: Gets the value stored in the second data member (b)
// Parameters: None
// Returns: None
template <class T>
T Pair<T>::getSecond()
{
	return b;
}

