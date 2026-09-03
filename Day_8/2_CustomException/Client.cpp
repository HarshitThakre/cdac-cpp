#include"Product.h"

int main()
{
	try
	{
		Product p1(1, "TV", 89000);

		p1.display();

		cout << "\n update the details---";
		p1.accept();
		cout << "\n updated the details---";

		p1.display();
	}
	catch (CustomException err)
	{
		cout << err.what();
	}

	return 0;
}