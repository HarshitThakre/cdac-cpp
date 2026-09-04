#include "Demo.h"

int main()
{
	float radius = 2.5f, area = 0, circum = 0;
	// pass by reference demo
	calculateByRef(radius, area, circum);
	cout << "\n the area is " << area << "\n the circumference is" << circum;

	// pass by address demo
	/*calculateAreaCircum(radius, &area, &circum);
	cout << "\n the area is " << area <<
		"\n the circumference is" << circum;*/

	// pass by address demo
	/*int num = 10;

	cout << "\n before " << num;
	test(&num);
	cout << "\n After " << num;*/

	return 0;
}