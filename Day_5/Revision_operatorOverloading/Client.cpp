#include"Distance.h"

int main()
{
	Distance d1(12.0f, 5.0f);
	d1.display();

	Distance d2(3.0f, 4.0f);
	d2.display();

	Distance d3(0, 0);
	d3 = d1 + d2;  //d3=d1.operator+(d2)
	d3.display();

	if (d1 == d2)  //if(d1.opertor==(d2))
	{
		cout << "\n Equaal";
	}
	else
	{
		cout << "\n not equal";
	} 

	if (d1 < d2)  //if(d1.operator<(d2))
	{
		cout << "d2 is greater";
	}
	else
	{
		cout << "\n d1 is greater";
	}
}