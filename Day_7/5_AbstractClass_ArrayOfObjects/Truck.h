#pragma once
#include"Vehicle.h"
class Truck :public Vehicle {

	double fuelEfficiency;
	double fuelPricePerLiter;

public:
	Truck(string vehicleID, string model, double baseMaintenanceCost, double fuelEfficiency, double fuelPricePerLiter)
		:Vehicle(vehicleID, model, baseMaintenanceCost) {

		this->fuelEfficiency = fuelEfficiency;
		this->fuelPricePerLiter = fuelPricePerLiter;
	}

	double calculateOperatingCost(double distance) {
		float Operating_Cost = distance / fuelEfficiency * fuelPricePerLiter + baseMaintenanceCost;
		return Operating_Cost;
	}
	void displayDetails() {
		cout << "Vehicle Id: " << vehicleID << endl;
		cout << "Vehicle Model: " << model << endl;
		cout << "Vehicle Base Maintenace Cost: " << baseMaintenanceCost << endl;
		cout << "Fuel Efficiency: " << fuelEfficiency << endl;
		cout << "Fuel Price: " << fuelPricePerLiter << endl;

	}

};