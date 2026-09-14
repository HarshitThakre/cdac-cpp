#pragma once

#include<iostream>
using namespace std;

class Distance
{
private:
	float feet, inches;
public:
	Distance(float feet, float inches)
	{
		this->feet = feet;
		this->inches = inches;
	}
	void display()
	{
		cout << "\n the feets unit is " << feet;
		cout << "\n the inches unit is " << inches;
	}
	Distance& operator+(Distance& obj)
	{
		//create a temp object
		Distance temp(0, 0);

		//add this object with obj coming in para and
		//store result in temp
		temp.feet = this->feet + obj.feet;
		temp.inches = this->inches + obj.inches;

		//return temp object
		return temp;
	}

	bool operator==(Distance& obj)
	{
		//compare the this object with obj
		if (this->inches == obj.inches && this->feet == obj.feet)
		{
			return true;
		}
		return false;
	}
	bool operator<(Distance& obj)
	{
		if (this->inches < obj.inches && this->feet < obj.feet)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
};
