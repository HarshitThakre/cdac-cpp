#pragma once
#include<iostream>
using namespace std;
#include"CustomException.h"

class Product
{
private:
	int pid;
	string name;
	double price;

public:
	Product(int id, string name, double price)
	{
		this->pid = id;
		this->name = name;
		if (price < 0)
		{
			CustomException ex("price cannot be negative");
			throw ex;
		}
		this->price = price;
	}
	void accept()
	{	
		double tempPrice; 
		cout << "\n enter the values:";
		cin >> pid >> name >> tempPrice;
		if (tempPrice < 0)
		{
			CustomException ex("price cannot be negative");
			throw ex;
		}

		price = tempPrice;

	}
	void display()
	{
		cout << "\n the details are----------";
		cout << "\n" << pid << " " << name << " " << price;
	}
};