#pragma once
#include<string>
#include<iostream>
using namespace std;
class Product
{
private:
	string product_name;
	int product_id;
	int price;
	static string brand_name; 

public:
	Product() {
		product_name = "";
		product_id = 0;
		price = 0;
		
	}
	Product(string product_name, int product_id, int price) {
		this->product_name = product_name;
		this->product_id = product_id;
		this->price = price;

	}

	void accept() {
		cout << "Enter the product_name";
		cin >> product_name;
		cout << "Enter the product_id";
		cin >> product_id;
		cout << "Enter the price";
		cin >> price;
	}


	//display 

	void display() {
		cout << "Product name is = " << product_name<<endl;
		cout << "Product id is = " << product_id << endl;
		cout << "Product price is = " << price << endl;
		cout << "Brand name is =" << brand_name << endl;

	}

	static void  Update_brand_name(string New_brand_name) {
		brand_name = New_brand_name;

	}
};

string Product::brand_name = "abc";


