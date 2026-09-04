#pragma once
#include "Vehicle.h"

class ElectricVan : public Vehicle{
	
private:
	double energyConsumption;
	double costPerKWh;

public:
	ElectricVan(string vehicleID, string model, double baseMaintenanceCost, double energyConsumption, double costPerKWh)
		:Vehicle(vehicleID, model, baseMaintenanceCost) {
		
		this->energyConsumption = energyConsumption;
		this->costPerKWh = costPerKWh;
		
	}

	double calculateOperatingCost(double distance) {
		float Operating_Cost =  (distance * energyConsumption * costPerKWh) + baseMaintenanceCost;
		return Operating_Cost;
	}


	void displayDetails() {
		cout << "Vehicle Id: " << vehicleID << endl;
		cout << "Vehicle Model: " << model << endl;
		cout << "Vehicle Base Maintenace Cost: " << baseMaintenanceCost << endl;
		cout << "Fuel Electric Efficiency: " << energyConsumption << endl;
		cout << "Fuel Electric Price: " << costPerKWh << endl;

	}


};