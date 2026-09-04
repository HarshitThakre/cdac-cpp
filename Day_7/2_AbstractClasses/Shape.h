#pragma once
#include<iostream>
using namespace std;

class Shape
{
protected:
	double area;

public:
	Shape()
	{
		area = 0.0;
	}

	virtual void calArea() = 0;
};
