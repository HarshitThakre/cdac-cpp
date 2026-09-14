//accept a number and display the sum of digits

#include<iostream>
using namespace std;

int calculateSumOfDigits(int num)
{
	int sum = 0, dig;
	while (num != 0)
	{
		dig = num % 10;
		sum = sum + dig;
		num = num / 10;
	}
	return sum;
}

int main()
{
	int num, sum=0;
	cout << "\n enter the number:";
	cin >> num;
	sum = calculateSumOfDigits(num);
	cout << "\n the sum of digits is " << sum;
	return 0;
}

