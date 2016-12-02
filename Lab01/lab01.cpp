// Course: CS 1410
// Instructor: Professor Wagstaff
// File: lab01.cpp
// Contents: Lab #1 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// User input variable needed
	string userName;

	// Ask user for name.
	cout << "Hello, my name is Hal, what is your name?" << endl;
	getline(cin, userName);

	// Output name
	cout << "Welcome to C++ " << userName << ", let the adventure begin." << endl;

	// End Program
	system("pause");
	return 0;
}
