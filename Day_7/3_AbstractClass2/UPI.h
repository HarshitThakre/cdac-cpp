#pragma once
#include "Transaction.h"

class Upi : public Transaction
{
private:
	string upiID;

public:
	Upi(string upiID, float currBal)
		: Transaction(currBal)
	{
		this->upiID = upiID;
	}
	void display()
	{
		cout << "\n the upiid is " << upiID;
		Transaction::display();
	}
	bool transfer(float amount)
	{
		this->currBal = this->currBal - amount;
	}
	bool scanQR()
	{
		cout << "\n Scanning the QR";
		cout << "\n Scanned successfully";
		return true;
	}
};
