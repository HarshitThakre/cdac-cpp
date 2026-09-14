//accept the salary from user and display the bonus
//salary 10000-50000 bonus 10% of salary
//salary 50000-150000 bonus is 5% of salary
//salary > 150000 bonus is 2.5% of salary
//anything out of range - not eligible

#include<iostream>
using namespace std;

int main() {
	float salary,bonous;
	cout << "enter the salary : " << endl;
	cin >> salary;

	if (salary >= 10000 && salary < 50000) {
		bonous = (10.0f / 100) * salary;
		cout << "salary is :" << salary + bonous;
	}
	else if (salary >= 50000 && salary < 150000) {
		bonous = (5.0f/100) * salary;
		cout << "salary is :" << salary + bonous;
	}
	else if (salary > 150000) {
		bonous = (2.5f / 100) * salary;
		cout << "salary is :" << salary + bonous;
	}
	else {
		cout << "not eligible" << endl;
	}
	return 0;
}


