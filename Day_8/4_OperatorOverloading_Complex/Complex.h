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

	Complex& operator+(Complex& obj)  //add 2 objects
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

	Complex& operator+(int num)  //add an object with int
	{
		Complex temp;
		temp.real = this->real + num;
		temp.imag = this->imag + num;
		return temp;
	}
	friend Complex& operator+(int, Complex&);
	friend ostream& operator<<(ostream& o, Complex& obj);
	friend istream& operator>>(istream& i, Complex& obj);

};

Complex& operator+(int num, Complex& c)
{
	Complex temp;
	temp.real = num + c.real;
	temp.imag = num + c.imag;
	return temp;
}

//void operator<<(ostream& o, Complex& obj)
ostream& operator<<(ostream& o, Complex& obj)
{
	o << "the complex num is " << obj.real << "+" << obj.imag<<"i"<<endl;
	return o;
}

istream& operator>>(istream& i, Complex& obj)
{
	cout << "\n enter the real:";
	i >> obj.real;
	cout << "\n neter the imag:";
	i >> obj.imag;
	return i;
}