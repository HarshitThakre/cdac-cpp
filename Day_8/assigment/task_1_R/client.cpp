#include "wallet.h"

int main()
{
    Wallet w;

    bool flag = true;

    do
    {
        try
        {
            int choise;
            cout << "\n 1. Make a wallet \n 2. Add Money \n 3. withdraw Money \n 4.Display Details \n 5. Exit ";
            cin >> choise;

            switch (choise)
            {
            case 1:
                cout << "\n Enter wallet Details below : \n";
                cin >> w;
                break;

            case 2:

                w.deposit();
                break;
            case 3:
                w.withdraw();
                break;
            case 4:
                cout << w;

            case 5:
                flag = false;

            default:
                break;
            }
        }
        catch (const InsufficientBalanceException err)
        {
            cout << "Exception happned : " << err.what();
        }
    } while (flag)
}