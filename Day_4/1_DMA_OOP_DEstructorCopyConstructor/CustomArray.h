#pragma once
#include<iostream>
using namespace std;
class CustomArray
{
private:
	int* arr, noe;
public:
	CustomArray(int noe)
	{
		this->noe = noe;
		//allocate a memory
		arr = new int[noe];
		for (int i = 0; i < noe; i++)
		{
			arr[i] = 0;
		}
	}

	CustomArray(CustomArray& copyObj)
	{
		this->noe = copyObj.noe;
		this->arr = new int[this->noe];
		for (int i = 0; i < noe; i++)
		{
			this->arr[i] = copyObj.arr[i];
		}
	}

	void accept()
	{ 
		for (int i = 0; i < noe; i++)
		{
			cout << "\n enter the ele:";
			cin >> arr[i];
		}
	}
	void display()
	{

		for (int i = 0; i < noe; i++)
		{
			cout << "\n the ele:" << arr[i];
		}
	}

	~CustomArray()
	{
		if (arr != NULL)
		{
			delete[]arr;
			arr = NULL;
		}
	}

	CustomArray& operator=(CustomArray& copyObj)
	{
		if (this->arr != NULL)
		{
			delete[] this->arr;
			arr = NULL;
		}
		this->noe = copyObj.noe;
		this->arr = new int[this->noe];
		for (int i = 0; i < this->noe; i++)
		{
			this->arr[i] = copyObj.arr[i];
		}
		return *this;
	}
};
