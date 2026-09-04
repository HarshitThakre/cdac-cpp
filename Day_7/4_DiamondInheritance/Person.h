#pragma once
#include<iostream>
using namespace std;

class Person
{
protected:
	string name;
public:
	Person(string name)
	{
		this->name = name;
	}
	void displaydetails()
	{
		cout << "\n the name is " << this->name;
	}
};

