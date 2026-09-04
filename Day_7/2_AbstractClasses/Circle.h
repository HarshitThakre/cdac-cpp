#pragma once
#include<iostream>
using namespace std;
#include"Shape.h"
class Circle:public Shape
{
private:
	double radius;
public:
	Circle(double radius)
	{
		this->radius = radius;
	}
	void display()
	{
		cout << "\n the radius is " << radius;
	}
	void calArea()
	{
		cout<<"\n the area is "<<(this->area = 3.14 * radius * radius);
	}
};