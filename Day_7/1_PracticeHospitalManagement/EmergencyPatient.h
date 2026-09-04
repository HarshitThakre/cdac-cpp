#pragma once
#include"InPatient.h"

class EmergencyPatient :public InPatient
{
private:
	double ambulancecharges;
	double emergencycharges;

public:
	EmergencyPatient(string name, int age, double consultationFees, double roomCharges, int noOfDaysAdmitted, double ambulanceCharges, double emergencyCharges)
		:InPatient(name,age,consultationFees,roomCharges,noOfDaysAdmitted)
	{
		this->ambulancecharges = ambulanceCharges;
		this->emergencycharges = emergencyCharges;
	}
	void displayDetails()
	{
		InPatient::displayDetails();
		cout << "\n ambulance charges-" << this->ambulancecharges;
		cout << "\n emergency charges-" << this->emergencycharges;
	}
	double calculateBill()
	{
		return InPatient::calculateBill()+ambulancecharges+emergencycharges;
	}
	void notify()
	{
		cout << "\n Emergency charges applied";
	}
};
