#pragma once
#include<iostream>
using namespace std;

class Patient
{
protected:
	static int count;
	int id;
	string name;
	int age;
	double consultationFees;
public:
	Patient(string name,int age,double consultationFees)
	{
		count++;
		id = count;
		this->name = name;
		this->age = age;
		this->consultationFees = consultationFees;
	}
	virtual void displayDetails()
	{
		cout << "\n the details are----------";
		cout << "\n id-" << id;
		cout << "\n name-" << name;
		cout << "\n age-" << age;
		cout << "\n Consultation fees-" << this->consultationFees;
	}
	virtual double calculateBill() = 0;
	


};
int Patient::count = 0;

