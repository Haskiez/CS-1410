// CS 1410 Programming Project #3
// Copyright 2014, Utah Valley University
//Author: Roger deBry
// Date last modified: October 2015
// Header file for main - constants and function prologues
// =================================================

#pragma once
#include <string>
#include <iostream>
#include "Book.h"
#include <vector>
#include <fstream>
#include "Exceptions.h"
using namespace std;

// The displayBooks function
// Purpose: Display all of the data about a book
// Parameters: A vector of Book objects
// Returns: none
void displayBooks(const vector<Book>&);

// The createTestFile function
// Purpose: Create a test file using the book data
// Parameters: none
// Returns: none
void createTestFile();

// The readTestFile function
// Purpose: Read the test file and display the results
// Parameters: none
// Returns: none
void readTestFile();

// The openFile function
// Purpose: Open a file for reading
// Parameters: an istream object and a file name
// Returns: none
// Throws a FileException if the file cannot be opened
void openFile(ifstream&, const string&);
