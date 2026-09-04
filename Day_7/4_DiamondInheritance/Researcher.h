#pragma once
#include"Person.h"

class Researcher : virtual public Person {
private:
	int rid;
public:
	Researcher(int rid, string name)
		:Person(name)
	{
		this->rid = rid;
	}
	void publishPaper()
	{
		cout << "\n Papers are published by researcher";
	}
	void displaydetails()
	{
		cout << "\n in Researcher class";
		Person::displaydetails();
	}
};
