#include"Truck.h"
#include"Electric_Van.h"

int main() {
	
	Vehicle** ptr;
	int nop;
	cout << "enter the number of vehicle"
		<< endl;
	cin >> nop;
	string vid;
	string model;
	double baseMaintenanceCost;
	double fuelEfficiency;
	double fuelPricePerLiter;
	double energyConsumption;
	double costPerKWh;
	ptr = new Vehicle * [nop];
	for (int i = 0; i < nop; i++)
	{
		cout << "1.Truck 2.Electric van" << endl;
		int choice = 0;
		cout << "Enter the choice : " << endl;
		cin >> choice;
		cout << "Enter vehicle id : " << endl;
		cin >> vid;
		cout << "Enter the model : " << endl;
		cin >> model;
		cout << "Enter the maintenance cost : " << endl;
		cin >> baseMaintenanceCost;
		switch (choice)
		{
		case 1:
			cout << "Enter the fuel efficiency : " << endl;
			cin >> fuelEfficiency;
			cout << "Enter the price : " << endl;
			cin >> fuelPricePerLiter;
			ptr[i]= new Truck(vid,model,baseMaintenanceCost,fuelEfficiency,fuelPricePerLiter);
			break;
		case 2:
			cout << "Enter the Energy Consumption : " << endl;
			cin >> energyConsumption;
			cout << "Enter the cost per watt : " << endl;
			cin >> costPerKWh;
			ptr[i] = new ElectricVan(vid, model, baseMaintenanceCost, energyConsumption, costPerKWh);
			break;
		}
	}
	for (int i = 0; i < nop; i++)
	{
		ptr[i]->displayDetails();
		cout << "operating cost is :"<<ptr[i]->calculateOperatingCost(54) << endl;
	}
	for (int i = 0; i < nop; i++)
	{
		delete ptr[i];
	}
	delete[] ptr;

	/*Vehicle* ptr;
	ptr = new Truck("MH 08 agasga", "Tata",25.25,10.00,112 );
	ptr->displayDetails();
	cout<<ptr->calculateOperatingCost(54);

	ptr = new ElectricVan("CyberTRuck", "Tesla", 25.25, 10.00, 112);
	ptr->displayDetails();
	cout << ptr->calculateOperatingCost(54);*/


}