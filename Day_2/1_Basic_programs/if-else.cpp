// program to check a number positive or negative

#include <iostream>
using namespace std;

bool check(int num)
{
	if (num > 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int num;
	bool flag;

	cout << "enter the number:";
	cin >> num;

	flag = check(num);
	if (flag == 1)
	{
		cout << "\n Positive!!!";
	}
	else
	{
		cout << "\n Negative!!!";
	}
	return 0;
}