#include <iostream>
using namespace std;

int main()
{

    int choice;
    float balance = 5000, amount;

    cout << "===== ATM MENU =====" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {

    case 1:
        cout << "Your Balance = " << balance << endl;
        break;

    case 2:
        cout << "Enter deposit amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount Deposited Successfully" << endl;
        cout << "Your Balance = " << balance << endl;
        break;

    case 3:
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;

            cout << "Amount Withdrawn Successfully" << endl;
            cout << "Your Balance = " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }

        break;

    case 4:
        cout << "Thank you for using ATM" << endl;
        break;

    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}