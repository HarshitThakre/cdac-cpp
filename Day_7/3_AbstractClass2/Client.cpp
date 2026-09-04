#include "NBTransaction.h"
#include "UPI.h"

class PrintToScreen
{
public:
	static void displayTransaction(Transaction *ptr)
	{
		if (typeid(*ptr) == typeid(Upi))
		{
			Upi *uptr = dynamic_cast<Upi *>(ptr);
			uptr->scanQR();
		}
		if (typeid(*ptr) == typeid(Nbtransaction))
		{
			Nbtransaction *uptr = dynamic_cast<Nbtransaction *>(ptr);
			uptr->addbenef();
		}
		if (ptr->transfer(5000))
		{
			cout << "\n Transfer Successfully.";
		}
		else
		{
			cout << "\n Insuffcient Balance.";
		}
		ptr->display();
	}
};

int main()
{

	Upi *u1 = new Upi("abc123", 10000.00);

	PrintToScreen::displayTransaction(u1);

	Nbtransaction *nb1 = new Nbtransaction("pqr456", 4000.00);

	PrintToScreen::displayTransaction(nb1);

	delete[] u1;
	delete[] nb1;
}