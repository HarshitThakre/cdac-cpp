#pragma once
#include"Patient.h"

class InPatient :public Patient
{
private:
	double roomCharges;
	int noOfDaysAdmitted;

public:
	InPatient(string name, int age, double consultationFees, double roomCharges, int noOfDaysAdmitted)
		:Patient(name,age, consultationFees)
	{
		this->roomCharges = roomCharges;
		this->noOfDaysAdmitted = noOfDaysAdmitted;
	}

	void displayDetails()
	{
		Patient::displayDetails();
		cout << "\n roomcharges-" << this->roomCharges;
		cout << "\n No of days admitted-" << this->noOfDaysAdmitted;
	}
	double calculateBill()
	{
		return (roomCharges * noOfDaysAdmitted)+consultationFees;
	}
};
