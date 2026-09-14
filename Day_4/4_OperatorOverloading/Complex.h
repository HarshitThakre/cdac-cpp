#pragma once
#include<iostream>
using namespace std;

class Complex
{
private:
	float real, imag;
public:
	Complex() {
		real = 0.0;
		imag = 0.0;
	}
	Complex(float real, float imag)
	{
		this->real = real;
		this->imag = imag;
	}
	void display()
	{
		cout << "\n the number is " << real << "+"
			<< imag << "i";
	}

	Complex& operator+(Complex& obj)
	{
		Complex temp;
		temp.real = this->real + obj.real;
		temp.imag = this->imag + obj.imag;
		return temp;
	}

	Complex& operator-(Complex& obj)
	{
		Complex temp;
		temp.real = this->real - obj.real;
		temp.imag = this->imag - obj.imag;
		return temp;
	}

	Complex& operator-()
	{
		Complex temp;
		temp.real = -this->real;
		temp.imag = -this->imag;
		return temp;
	}

	Complex& operator++()
	{
		this->real = this->real + 1;
		this->imag = this->imag + 1;
		return *this;
	}

	Complex& operator++(int dummy)
	{
		Complex temp = *this;
		this->real += 1;
		this->imag += 1;
		return temp;
	}


};

