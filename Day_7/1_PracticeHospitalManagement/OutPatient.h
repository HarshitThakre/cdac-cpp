#pragma once

#include"Patient.h"

class OutPatient :public Patient
{
private:
	double medicineCharges;
public:
	OutPatient(string name, int age, double consultationFees,double medicineCharges)
		:Patient(name,age, consultationFees)
	{
		this->medicineCharges = medicineCharges;
	}
	void displayDetails()
	{
		Patient::displayDetails();
		cout << "\n medicine charges-" << this->medicineCharges;
	}
	double calculateBill()
	{
		return consultationFees+medicineCharges;
	}
};
