#include"IntArray.h"

int main()
{
	IntArray a1(3);
	a1.accept();
	cout << "\n a1-----------";
	a1.display();
	cout << "\n a1[2]-----------";
	cout << a1[2];

	a1[0] = 100;
	cout << "\n a1-----------";
	a1.display();

	//{
	//	IntArray a2 = a1;  //copy constructor
	//	cout << "\n a2-----------";
	//	a2.display();
	//}
	//cout << "\n a1-----------";
	//a1.display();

}