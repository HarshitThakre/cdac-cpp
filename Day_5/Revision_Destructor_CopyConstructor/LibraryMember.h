#pragma once
#include<iostream>
#include<string>
using namespace std;

class LibraryMember
{
private:
	int id;
	string name;
	int* bookid_arr;
	int nob;
public:
	LibraryMember(int id, string name, int nob)
	{
		this->id = id;
		this->name = name;
		this->nob = nob;
		this->bookid_arr = new int[nob];
		for (int i = 0; i < nob; i++)
		{
			this->bookid_arr[i] = 0;
		}

	}

	void display()
	{
		cout << "\n id =" << id;
		cout << "\n name =" << name;
		for (int i = 0; i < nob; i++)
		{
			cout << "\n book id-" << bookid_arr[i];
		}
	}

	void accept_bookdetails()
	{
		for (int i = 0; i < nob; i++)
		{
			cout << "\n enter the book id:";
			cin >> bookid_arr[i];
		}
	}

	~LibraryMember()
	{
		if (bookid_arr != NULL)
		{
			delete[] bookid_arr;
			bookid_arr = NULL;
		}
	}

	LibraryMember(LibraryMember& copyObj)
	{
		//copy the details of copyObj in this object
		this->id = copyObj.id;
		this->name = copyObj.name;
		this->nob = copyObj.nob;
		this->bookid_arr = new int[this->nob];
		for (int i = 0; i < nob; i++)
		{
			this->bookid_arr[i] = copyObj.bookid_arr[i];
		}
	}

	LibraryMember& operator=(LibraryMember& copyObj)
	{
		//copy the details of copyObj in this object
		this->id = copyObj.id;
		this->name = copyObj.name;
		this->nob = copyObj.nob;
		this->bookid_arr = new int[this->nob];
		for (int i = 0; i < nob; i++)
		{
			this->bookid_arr[i] = copyObj.bookid_arr[i];
		}
	}
};
