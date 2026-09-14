#include<iostream>
#include "CustomArray.h"


int main()
{
	int noe;
	cout << "\n eneter the noe:";
	cin >> noe; //3
	CustomArray obj1(noe);
	obj1.accept();
	cout << "\n Obj1--------------";
	obj1.display();
	//{
	//	//CustomArray obj2(obj1);
	//	CustomArray obj2 = obj1;
	//	cout << "\n Obj2--------------";
	//	obj2.display();
	//}

	//cout << "\n Obj1--------------";
	//obj1.display();

	{
		CustomArray obj3(2);
		obj3.accept();
		cout << "\n Obj3-----------";
		obj3.display();
		obj3 = obj1;  //obj3.operator=(obj1)
		cout << "\n Obj3-----------";
		obj3.display();
	}
	cout << "\n Obj1-----------";
	obj1.display();

}
