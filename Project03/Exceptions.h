// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: myProgram.cpp
// Contents: Lab #1 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Exceptions
{
private:
	string message;
public:
	Exceptions();
	Exceptions(int);
	string getMessage(void);
	~Exceptions();
};

