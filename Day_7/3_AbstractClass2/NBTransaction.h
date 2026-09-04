#pragma once
#include"Transaction.h"

class Nbtransaction :public Transaction {
private:
	string Accountno;
public:
	Nbtransaction(string Accountno, float currBal)
		:Transaction(currBal)
	{
		this->Accountno = Accountno;
	}
	void display()
	{
		cout << "\n the account no is " << this->Accountno;
		Transaction::display();
	}
	bool transfer(float amount)
	{
		this->currBal = this->currBal - amount;
	}
	bool addbenef()
	{
		cout << "\n beneficiary added!!!";
		return true;
	}
};