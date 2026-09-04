#include"Date.h"

int main()
{
	Date d1;  //compile time object
	d1.displayDate();

	Date d2(12, 12, 2012);
	d2.displayDate();

	//assign the d1's mm to d2's mm
	//d2.setMM(d1.getMM());
	int newmm = d1.getMM();
	d2.setMM(newmm);

	Date d3 = d2; //Date d3(d2)  //compiler's copy constructor is called
	//one object is created based on another object
	d3.displayDate();

	const Date d4(21, 3, 2019);
	//constant fucntions cannot invoke non-const function
	d4.displayDate();

	Date* dptr;
	dptr = new Date(4, 5, 2016) ;
	dptr->displayDate();
	
	delete[]dptr;
}