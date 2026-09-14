#include"ShoppingCart.h"

int main()
{
	ShoppingCart c1(4);
	c1.accept();
	cout << "\n All price-------";
	c1.display();
	cout << "\n total bill -------------";
	c1.totalBill();
	cout << "\n the max price------------";
	c1.maxPriceProduct();

	ShoppingCart c2(c1);
	c2.display();

}