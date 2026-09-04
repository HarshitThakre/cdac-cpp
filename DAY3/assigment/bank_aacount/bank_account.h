
#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string acc_no;
    string name;
    int balance;

public:
    Account();
    Account(string name, string acc_no, int balance);
    void accept();
    void display();
    void deposit(int dpt_amt);
    void withdraw(int wtd_amt);

    string get_name()
    {
        return this->name;
    }
    string get_acc_no()
    {
        return this->acc_no;
    }
    int get_balace()
    {
        return this->balance;
    }
};

Account::Account()
{
    this->name = "Unknown";
    this->acc_no = "Unknown";
    this->balance = 0;
}

Account::Account(string name, string acc_no, int balance)
{
    this->name = name;
    this->acc_no = acc_no;
    if (this->balance >= 0)
    {
        this->balance = balance;
    }
    else
    {
        cout << "Invalid balance amount!";
    }
}
void Account::accept()
{
    cout << "Enter Acc. Name:";
    cin >> name;
    cout << "Enter Acc. No.:";
    cin >> acc_no;
    cout << "Enter Balance:";
    cin >> balance;
}

void Account::display()
{
    cout << "Account Holder Name: " << this->name << endl;
    cout << "Account No.: " << this->acc_no << endl;
    cout << "Account Balance: " << this->balance << endl;
}

void Account::deposit(int dep_amt)
{
    if (dep_amt > 0)
    {
        this->balance += dep_amt;
        cout << "Curruent balance: " << this->balance << endl;
    }
    else
    {
        cout << "Invalid Ammount !, Enter postive value! ";
    }
}

void Account::withdraw(int wtd_amt)
{
    if (wtd_amt > this->balance)
    {
        cout << "Insuffient balance";
        cout << "Curruent balance: " << this->balance << endl;
    }
    else
    {
        this->balance -= wtd_amt;
        cout << "Ammount Withdrawn: " << wtd_amt << endl;
        cout << "Curruent balance: " << this->balance << endl;
    }
}