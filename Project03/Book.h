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
#include "Author.h"
using namespace std;

class Book
{
private:
	Author author;
	string title;
	int pages;
	double price;

public:
	Book();
	Book(Author inputAuthor, string inputTitle, int inputPages, double inputPrice);
	Author getAuthor(void) const;
	void setAuthor(Author inputAuthor);
	string getTitle(void) const;
	void setTitle(string inputTitle);
	int getPages(void) const;
	void setPages(int inputPages);
	double getPrice(void) const;
	void setPrice(double inputPrice);
	void readData(ifstream&);
	void writeData(ofstream&);
	~Book();
};

