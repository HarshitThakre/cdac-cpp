#include"LibraryMember.h"

int main()
{
	LibraryMember m1(1, "john", 3);
	m1.accept_bookdetails();
	cout << "\n the m2-------------------";
	m1.display();

	{
		LibraryMember m2 = m1;
		cout << "\n the m2-------------------";
		m2.display();
	}

	LibraryMember m3(2, "kim", 7);
	m3.display();

	m3 = m1;  //m3.operator=(m1);
	m3.display();
}
