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


#include <iostream>
#include "Pair.h"
using namespace std;

int main()
{
	Pair<char> letters('a', 'd');
	cout << "\nThe first letter is: " << letters.getFirst();
	cout << "\nThe second letter is: " << letters.getSecond();

	cout << endl;
	system("Pause");
	return 0;
}
