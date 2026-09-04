#pragma once
#include"Person.h"

class Trainer :virtual public Person
{
protected:
	int trainerId;
public:
	Trainer(int trainerId, string name)
		:Person(name)
	{
		this->trainerId = trainerId;
	}
	void provideTraining()
	{
		cout << "\n the trainer is providing the sessions on CPP";
	}
	void displaydetails()
	{
		cout << "\n in trainer class";
		Person::displaydetails();
	}
};
