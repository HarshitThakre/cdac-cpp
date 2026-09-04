#pragma once
#include"Student.h"


class ArrayOperations
{
public:

	static void allocate(Student*& sarr, int& nos)
	{
		cout << "enter the number of students:";
		cin >> nos;
		sarr = new Student[nos];
	}
	static void acceptDetails(Student*& sarr, int& nos)
	{
		for (int i = 0; i < nos; i++)
		{
			sarr[i].accept();
		}
	}
	static void displayDetails(Student*& sarr, int& nos)
	{
		for (int i = 0; i < nos; i++)
		{
			sarr[i].display();
		}
	}
	static void deallocate(Student*& sarr)
	{
		delete[]sarr;
	}
};