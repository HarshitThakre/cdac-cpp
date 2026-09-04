#include"Professor.h"

int main()
{
	Professor p1(1, 1, 1, "john");
	//p1.displaydetails();  //err statement if not overridden
	//p1.Researcher::displaydetails(); //call it from researcher class
	p1.displaydetails();  //call it from Prof class as it is overriden

}