#include"ArrayOperations.h"

int main()
{
	int nos;
	Product* sarr;
	ArrayOperations::allocate(sarr, nos);
	ArrayOperations::acceptDetails(sarr, nos);
	ArrayOperations::displayDetails(sarr, nos);
	ArrayOperations::deallocate(sarr);
}