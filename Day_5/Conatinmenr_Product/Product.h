#pragma once
#include"Date.h"

class Product
{
private:
	int pid;
	string name;
	float price;
	Date mfgDate;
	Date expDate;

public:
	Product()
	{
		pid = 0;
		name = "NA";
		price = 0.0f;
	}
	Product(int pid = 111, string name, float price, int m_dd, int m_mm, int m_yy, int e_dd, int e_mm, int e_yy)
		:mfgDate(m_dd,m_mm,m_yy),expDate(e_dd,e_mm,e_yy)
	{
		this->pid = pid;
		this->name = name;
		this->price = price;
	}

	void display()
	{
		cout << "\n the details are:";
		cout << "\n pid-" << pid;
		cout << "\n name-" << name;
		cout << "\n price-" << price;
		cout << "\n mfg date-";
		mfgDate.displayDate();
		cout << "\n exp date-";
		expDate.displayDate();

	}
};
