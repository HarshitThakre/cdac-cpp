#pragma once
#include<iostream>
#include<string>
using namespace std;

class Vehicle {
protected:
	string vehicleID;

	string model;

	double baseMaintenanceCost;

public:
	Vehicle(string vehicleID, string model, double baseMaintenanceCost) {
		
		this->baseMaintenanceCost = baseMaintenanceCost;
		this->model = model;
		this->vehicleID = vehicleID;

	}

		virtual double calculateOperatingCost(double distance) = 0;
		virtual void displayDetails() = 0;
};