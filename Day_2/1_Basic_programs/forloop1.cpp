//accept the number and display the factorial

#include<iostream>
using namespace std;

int calculate(int num)
{
	int i, fact = 1;
	for (i = num; i >= 1; i--)
	{
		fact = fact* i;
	}
	return fact;
}

int main()
{
	int num, fact = 1;

	cout << "\n enter the number:";
	cin >> num;

	fact = calculate(num);

	cout << "\n the factorial is " << fact;

	return 0;

}