#pragma once
#include<iostream>
using namespace std;

void allocate(int*& arr, int& noe)
{
	if (arr != NULL)
	{
		delete[]arr;
		arr = NULL;
	}
	cout << "Enter the number of subject:";
	cin >> noe; //3
	//arr = (int*)malloc(sizeof(int) * noe);
	arr = new int[noe];
}
void acceptMarks(int* arr, int noe)
{
	for (int i = 0; i < noe; i++)
	{
		cout << "\n eneter the marks:";
		cin >> arr[i];
	}

}
void displayMarks(int* arr, int noe)
{
	for (int i = 0; i < noe; i++)
	{
		cout << arr[i]<<endl;
	}
}
void deallocate(int* arr)
{
	delete[] arr;
}


int findMax(int* arr, int noe)
{
	int max = arr[0];
	for (int i = 1; i < noe; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}