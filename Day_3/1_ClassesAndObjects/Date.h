#pragma once

#include <iostream>
using namespace std;

class Date
{
private:
	int dd, mm, yy;

public:
	Date() // no args constructor
	{
		dd = 1;
		mm = 1;
		yy = 2026;
	}
	Date(int dd, int mm, int yy) // para constructor
	{
		this->dd = dd; // curr object's dd= para dd value
		this->mm = mm;
		this->yy = yy;
	}

	// accessors
	int getDD() const
	{
		return dd;
	}
	int getMM() const
	{
		return mm;
	}
	int getYY() const
	{
		return yy;
	}

	// mutators
	void setDD(int dd)
	{
		this->dd = dd;
	}
	void setMM(int mm)
	{
		this->mm = mm;
	}
	void setYY(int yy)
	{
		this->yy = yy;
	}

	// facilitator
	void displayDate() const
	{
		int n = 1;
		n = 10; // local variable can be modified
		// but state cant be modified as its a const function
		cout << "\n the date is " << dd << "/" << mm << "/" << yy;
	}
};