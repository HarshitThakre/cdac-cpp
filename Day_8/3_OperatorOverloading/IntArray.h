#pragma once
#include<iostream>
using namespace std;

class IntArray
{
private:
	int* arr;
	int noe;

public:
	IntArray(int noe)
	{
		this->noe = noe;
		this->arr = new int[this->noe];
		for (int i = 0; i < noe; i++)
		{
			this->arr[i] = 0;
		}
	}

	void accept()
	{
		cout << "\n enter the ele---";

		for (int i = 0; i < noe; i++)
		{ 
			cout << "\n enter the el:";
			cin>> this->arr[i];
		}
	}

	void display()
	{
		for (int i = 0; i < noe; i++)
		{
			cout << this->arr[i]<<endl;
		}
	}

	~IntArray()
	{
		if (arr != NULL)
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}

	IntArray(IntArray& copyObj)
	{
		this->noe = copyObj.noe;
		this->arr = new int[this->noe];
		for (int i = 0; i < noe; i++)
		{
			this->arr[i] = copyObj.arr[i];
		}
	}

	int& operator[](int index)
	{
		if (index >= noe)
		{
			exit;
		}

		return arr[index];
	}


};