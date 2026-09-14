#pragma once
#include <iostream>
#include "customException.h"
using namespace std;

class Wallet
{
private:
    int w_id;
    string name;
    double balance;

public:
    Wallet()
    {
        this->w_id = 1;
        this->name = "default wallet";
        this->balance = 0;
    }
    Wallet(int w_id, string name, double balance)
    {
        this->w_id = w_id;
        this->name = name;
        if (balance <= 0)
        {
            InvalidAmmountException err("Balance can not be negetive or Zero! ");
            throw err;
        }
    }

    void deposit()
    {
        double tempDeposit;
        cout << "\n Enter Deposit ammount: ";
        cin >> tempDeposit;
        if (tempDeposit <= 0)
        {
            InvalidAmmountException err("Balance can not be negetive or Zero! ");
            throw err;
        }

        this->balance += tempDeposit;
        cout << "\n Money deposited \n New balance : " << balance;
    }

    void withdraw()
    {
        double wd_amt;
        cout << "\n Enter Withdraw ammount: ";
        cin >> wd_amt;
        if (wd_amt > this->balance)
        {
            InsufficientBalanceException err("Insufficient Balance ! ");
            throw err;
        }
        this->balance -= wd_amt;
        cout << " \n Amount withdrawn : " << wd_amt;
        cout << "\n Curruent Balance: " << this->balance;
    }

    friend ostream &operator<<(ostream &, Wallet &);
    friend istream &operator>>(istream &, Wallet &);
};

ostream &operator<<(ostream &o, Wallet &w)
{
    o << "\n walled ID : " << w.w_id;
    o << "\n Name  : " << w.name;
    o << "\n Wallet Balance : " << w.balance;

    return o;
};
istream &operator>>(istream &i, Wallet &w)
{
    double tempBalance;
    cout << "\n Enter walled ID : ";
    i >> w.w_id;
    cout << "\n Enter Name : ";
    i >> w.name;
    cout << "\n Enter deposit Ammount : ";
    i >> tempBalance;
    if (tempBalance <= 0)
    {
        InvalidAmmountException err("Deposit ammount cant be negative or zero !");
        throw err;
    }
    w.balance = tempBalance;
    return i;
};
