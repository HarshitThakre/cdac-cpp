//accept 2 number and create a menu driven program 
// A. Addidition
// S. Subtraction
//Enter the choice
//and display the result
#include<iostream>
using namespace std;

int main()
{
	int n1, n2;
	char choice;

	cout << "\n enter the 2 numbers:";
	cin >> n1 >> n2;

	cout << "\n A. Addition \n S.Subtraction";
	cout << "\n Enter the choice:";
	cin >> choice;

	switch (choice)
	{
	//fall trough of switch case i.e multiple cases have single code
	case 'a':	
	case 'A':
		cout << "\n addition is " << n1 + n2 << endl;
		break;
	case 's':
	case 'S':
		cout << "\n Subtraction is " << n1 - n2 << endl;
		break;
	default:
		cout << "\n invalid choice:";
		break;
	}

	return 0;
}

