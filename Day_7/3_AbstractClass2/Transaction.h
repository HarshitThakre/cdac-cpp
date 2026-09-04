#pragma once
#include<iostream>
using namespace std;
class Transaction {
protected:
	float currBal;
public:
	Transaction(float currBal)
	{
		this->currBal = currBal;
	}
	virtual bool transfer(float amount) = 0;
	virtual void display()
	{
		cout << "\n the current balance " << currBal;
	}

};