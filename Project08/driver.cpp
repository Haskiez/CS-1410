// CS 1410 Programming Project #8
// Copyright 2015, Utah Valley University
//Author: Roger deBry
// Date last modified: October 2015
// Implementation file for main
// =======================================
#include "Header.h"

int main()
{

	cout << "\nCreating a vector of doubles named Sam\n";
	MyVector<double> sam;

	cout << "\nPush 12 values into the vector.";
	for (int i = 0; i < 12; i++)
		sam.push_back(i + FRACTION);

	cout << "\nHere is sam: ";
	cout << sam;
	cout << "\n---------------\n";

	cout << "\nCreating an empty vector named joe";
	MyVector<double> joe;

	// test assignment
	joe = sam;

	cout << "\nHere is joe after doing an assignment:\n ";
	cout << joe;
	cout << "\n---------------\n";

	// test the copy constructor
	MyVector<double> bill = sam;

	cout << "\nHere is bill after creating it using the copy constructor:\n ";
	cout << bill;
	cout << "\n---------------\n";

	cout << endl;
	system("PAUSE");
	return 0;
}
