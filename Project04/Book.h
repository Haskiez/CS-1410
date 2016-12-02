// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: Book.h
// Contents: Project #5 Programming Assignment
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
#include <fstream>
#include "Author.h"
using namespace std;
class Book
{
protected:
	Author *author;
	string title;
	int numPages;
	double price;

public:
	Book();
	Book(Author *inputAuthor, string inputTitle, int inputPages, double inputPrice);
	Author* getAuthor(void) const;
	void setAuthor(Author *inputAuthor);
	string getTitle(void) const;
	void setTitle(string inputTitle);
	int getPages(void) const;
	void setPages(int inputPages);
	double getPrice(void) const;
	void setPrice(double inputPrice);
	virtual void readData(ifstream&);
	virtual void writeData(ofstream&);
	~Book();
};
