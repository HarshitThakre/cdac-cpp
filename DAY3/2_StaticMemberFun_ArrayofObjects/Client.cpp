#include"Student.h"
#include"ArrayOperations.h"
int main()
{
	//dynamic allocation of array

	Student* sarr;
	int nos;
	ArrayOperations::allocate(sarr, nos);
	ArrayOperations::acceptDetails(sarr, nos);
	ArrayOperations::displayDetails(sarr, nos);
	ArrayOperations::deallocate(sarr);
	
	

	//Compile time Array of objects

	/*Student sarr[3];
	cout << "\n the number of students is " << Student::getCountofStudents();

	for (int i = 0; i < 3; i++)
	{
		sarr[i].accept();
	}
	for (int i = 0; i < 3; i++)
	{
		sarr[i].display();
	}*/


	//V1
	/*Student s1("Ernst", 1, 89);
	cout << "\n the number of students is " << Student::getCountofStudents();
	Student s2("John", 2, 67);
	cout << "\n the number of students is " << Student::getCountofStudents();

	cout << "\n s1-------------";
	s1.display();
	cout << "\n s2-------------";
	s2.display();

	Student::updateOrgName("New IACSD");
	cout << "\n s1-------------";
	s1.display();
	cout << "\n s2-------------";
	s2.display();*/

}