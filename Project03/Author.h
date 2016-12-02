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
#include <string>
#include <iostream>
#include<fstream>
using namespace std;

class Author
{
private:
	string name;
	string address;
public:
	Author();
	Author(string inputName, string inputAddress);
	string getName(void) const;
	void setName(string inputName);
	string getAddress(void) const;
	void setAddress(string inputAddress);
	void readData(ifstream& inputStream);
	void writeData(ofstream& outputStream);
	~Author();
};
