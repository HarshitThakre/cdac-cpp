#pragma once
#include<iostream>
using namespace std;
#include"Shape.h"

class Square:public Shape
{
private:
	double side;
public:
	Square(double side)
	{
		this->side = side;
	}
	void display()
	{
		cout << "\n the side is " << this->side;
	}
	void calArea()
	{
		cout << "\n the area is "<<(this->area=side*side);
	}
};
