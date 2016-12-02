// Course: CS 1410
// Instructor: Professor Wagstaff
// File: Money.h
// Contents: Lab #11 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------------------------------

#pragma once
class Money
{
private:
	int dollars;
	int cents;

public:
	Money();
	Money(int, int);
	int getDollars() const;
	int getCents() const;
	void setDollars(int);
	void setCents(int);
	Money operator+(const Money&);
	Money operator-(const Money&);
	~Money();
};

