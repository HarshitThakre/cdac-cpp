#pragma once
#include "bank_account.h"

using namespace std;

class Arrayops
{
public:
    static void allocate(Account *&acc_arr, int &noe)
    {
        cout << "Enter noe:";
        cin >> noe;

        acc_arr = new Account[noe];
    }

    static void accept(Account *&acc_arr, int &noe)
    {
        for (int i = 0; i < noe; i++)
        {
            acc_arr[i].accept();
        }
    }

    static void display(Account *&acc_arr, int &noe)
    {
        for (int i = 0; i < noe; i++)
        {
            cout << i + 1 << ".";
            acc_arr[i].display();
            cout << "----------------------\n";
        }
    }

    static void deposit(Account *&acc_arr, int &noe)
    {

        int dpt_amt;
        string seach_acc_no;
        cout << "=================Deposit================== \n";
        cout << "Enter acc. no: ";
        cin >> seach_acc_no;

        for (int i = 0; i < noe; i++)
        {
            if (seach_acc_no == acc_arr[i].get_acc_no())
            {

                cout << "Enter Deposit ammount: ";
                cin >> dpt_amt;

                acc_arr[i].deposit(dpt_amt);

                cout << "Final- ";
                acc_arr[i].get_balace();
            }
            else
            {
                cout << "Invalid account number: " << seach_acc_no << endl;
            }
        }
    }

    static void withdraw(Account *&acc_arr, int &noe)
    {
        cout << "=====================Enter account no. below for withdraw =======================\n";

        int wtd_amt;

        string seach_acc_no;

        cout << "Enter acc. no: ";
        cin >> seach_acc_no;

        for (int i = 0; i < noe; i++)
        {
            if (seach_acc_no == acc_arr[i].get_acc_no())
            {

                cout << "Enter Withdraw ammount: ";
                cin >> wtd_amt;

                acc_arr[i].withdraw(wtd_amt);

                cout << "Final- ";
                acc_arr[i].get_balace();
            }
        }
    }

    static void deallocate(Account *&acc_arr)
    {
        delete[] acc_arr;
    }
};
