#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student
{
private:
	// data memb- allocated for every obj
	int rollNo, marks;
	string name;
	// class var- allocated as one copy
	// and shared by all objects
	static string orgName;
	static int count;

public:
	Student()
	{
		rollNo = 0;
		marks = 0;
		name = "";
		count++;
	}

	Student(string name, int rollNo, int marks)
	{
		this->name = name;
		this->rollNo = rollNo;
		this->marks = marks;
		count++;
	}

	// setters

	void setRollno(int rollNo)
	{
		this->rollNo = rollNo;
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setMarks(int marks)
	{
		this->marks = marks;
	}

	// getters

	int getRollNo() const
	{
		return rollNo;
	}

	int getMarks() const
	{
		return marks;
	}

	string getName() const
	{
		return name;
	}

	// mutator
	void accept()
	{
		cout << "Enter Student's name: ";
		cin >> name;
		cout << "Enter Student's Roll Number: ";
		cin >> rollNo;
		cout << "Enter Marks: ";
		cin >> marks;
	}

	// facilitators

	void display() const
	{
		cout << "Name: " << name << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Marks: " << marks << endl;
		cout << "OrgName: " << orgName << endl;
	}

	static void updateOrgName(string newOrgName)
	{
		orgName = newOrgName;
	}
	static int getCountofStudents()
	{
		return count;
	}
};

string Student::orgName = "IACSD";
int Student::count = 0;