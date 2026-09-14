#include"Complex.h"

int main()
{
	Complex c1(6, 4);
	c1.display();

	Complex c2(1, 1);
	c2.display();

	//Complex c3;
	//c3 = c1 + c2;  //c3=c1.operator+(c2)
	//cout << "\n c3=c1+c2------------";
	//c3.display();

	//cout << "\n c3=c1-c2------------";
	//c3 = c1 - c2; //c3=c1.operator-(c2)
	//c3.display();

	//cout << "\n c3=-c1------------";
	//c3 = -c1; //c3=c1.operator-()
	//c3.display();

	//Complex c4;
	//cout << "\n c4=++c2------------";
	//c4=++c2; //c4=c2.operator++()
	//cout << "\n C2------";
	//c2.display();
	//cout << "\n C4------";
	//c4.display();

	Complex c4;
	cout << "\n c4=c2++------------";
	c4=c2++; //c4=c2.operator++(dummy)
	cout << "\n C2------";
	c2.display();
	cout << "\n C4------";
	c4.display();
	

	Complex c5(2, 2), c6(1, 1);
	c6 = c5;
	c6.display();

}