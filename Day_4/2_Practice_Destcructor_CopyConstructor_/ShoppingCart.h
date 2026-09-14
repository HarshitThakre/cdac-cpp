#pragma once
#include<iostream>
using namespace std;

class ShoppingCart {
private:
	float* parr;
	int nop;

public:
	ShoppingCart(int nop) {
		parr = new float[nop];
		for (int i = 0; i < nop; i++)
		{
			parr[i] = 0;
		}
	}

	void accept() {
		for (int i = 0; i < nop; i++)
		{
			cout << "Enter Product " << i << " Price:";
			cin >> parr[i];
		}
	}

	void display() {
		for (int i = 0; i < nop; i++)
		{
			cout << "Product price of " << i <<" is " << parr[i];
		}
	}

	~ShoppingCart() {

		if (parr != NULL) {
			delete[]parr;
			parr = NULL;
		}
	}

	void totalBill() {
		float sum = 0;
		for (int i = 0; i < nop; i++)
		{
			sum += parr[i];
		}

		cout << "Total Cart Bill:" << sum << endl;
	}
	
	//function overloading
	void totalBill(float discountAmount)
	{
		float sum = 0;
		for (int i = 0; i < nop; i++)
		{
			sum += parr[i];
		}

		cout << "Total Cart Bill:" << sum-discountAmount << endl;
	}

	void maxPriceProduct() {
		float max = parr[0];
		for (int i = 1; i < nop; i++)
		{
			if (max < parr[i]) {
				max = parr[i];
			}
		}

		cout << " Max Price Product is:" << max;
	}

	ShoppingCart(ShoppingCart& copyObj)
	{
		this->nop = copyObj.nop;
		this->parr = new float[this->nop];
		for (int i = 0; i < nop; i++)
		{
			this->parr[i] = copyObj.parr[i];
		}
	}
};