#pragma once
#include<string>
#include<iostream>
using namespace std;
class Contact {
private:
	char mobileNum[11];
public: 
	Contact(char mobileNum[]) {
		strcpy_s(this->mobileNum, mobileNum);
	}
	void display() {
		cout << "Phone Number is: "<<mobileNum;
	}
	bool operator!() {
		if (strlen(this->mobileNum) == 10) {
			return true;
		}
		else {
			return false;
		}
	}
};