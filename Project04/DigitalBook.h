// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: DigitalBooks.h
// Contents: Project #5 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#pragma once
#include "Header.h"
class DigitalBook : public Book
{
private:
	string format;
public:
	DigitalBook();
	DigitalBook(Author*, string, int, double, string);
	string getFormat();
	void setFormat(string);
	void readData(ifstream&);
	void writeData(ofstream&);
	~DigitalBook();
};
