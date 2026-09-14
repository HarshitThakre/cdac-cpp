#pragma once
#include<iostream>
#include<string>
using namespace std;

class CloudStorage
{

private:
	int id;
	string name;
	int size;
	static int count;
public:
	CloudStorage()
	{
		count++;
		id = 0;
		name = "NA";
		size = 0;
	}
	CloudStorage(int id, string name, int size)
	{
		count++;
		this->id = id;
		this->name = name;
		this->size = size;
	}

	void accept()
	{
		cout << "\n enter details:";
		cin >> id >> name >> size;
	}
	void display()
	{
		cout << "\n id-" << id;
		cout << "\n name-" << name;
		cout << "\n size in bytes-" << size;
	}
};

int CloudStorage::count = 0;
