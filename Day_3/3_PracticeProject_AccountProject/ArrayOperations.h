#pragma once
#include"Product.h"

class ArrayOperations {
public:
	static void allocate(Product*& sarr, int& nos)
	{
		cout << "enter the number of products:";
		cin >> nos;
		sarr = new Product[nos];
	}

	static void acceptDetails(Product*& sarr, int& nos)
	{
		for (int i = 0; i < nos; i++) {
			sarr[i].accept();
		}
	}
	static void displayDetails(Product*& sarr, int& nos)
	{
		for (int i = 0; i < nos; i++) {
			sarr[i].display();
		}
	}
	static void deallocate(Product*& sarr) {
		delete[]sarr;
	}

};

