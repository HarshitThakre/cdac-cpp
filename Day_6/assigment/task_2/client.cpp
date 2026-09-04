#include "saving_acc.h"
#include "current_acc.h"
#include "fixed_deposit.h"

class PrintDetails
{
public:
    static void details(Account *aptr)
    {

        aptr->displayAccInfo();

        aptr->caluculate_returns();

        if (typeid(*aptr) == typeid(Saving))
        {
            Saving *sptr;
            sptr = dynamic_cast<Saving *>(aptr);
            sptr->saving_annocement();
        }
        else if (typeid(*aptr) == typeid(Current))
        {
            Current *cptr;
            cptr = dynamic_cast<Current *>(aptr);
            cptr->curr_announcement();
        }
        else
        {
            FD_Account *cptr;
            cptr = dynamic_cast<FD_Account *>(aptr);
            cptr->fd_announcement();
        }
    }
};

int main()
{

    Account **acc_arr;
    int noa;
    cout << "\n Enter number of account u want to create :";
    cin >> noa;

    acc_arr = new Account *[noa];

    for (int i = 0; i < noa; i++)
    {
        int choice;
        cout << "\n 1. Saving Acc \n 2. Curruent Acc \n 3. Fixed Deposit \n ";
        cout << "Enter choice : ";
        cin >> choice;

        switch (choice)
        {

        case (1):
        {
            string name;
            float balance;
            cout << "\n Saving Account============";
            cout << "\n enter Customer name : ";
            cin >> name;
            cout << "\n enter Depsit ammount : ";
            cin >> balance;

            acc_arr[i] = new Saving(name, balance);

            break;
        }

        case (2):
        {
            string name;
            float balance;
            cout << "\n Current Account============";
            cout << "\n enter Customer name : ";
            cin >> name;
            cout << "\n enter Deposit ammount : ";
            cin >> balance;

            acc_arr[i] = new Current(name, balance);

            break;
        }

        case (3):
        {
            string name;
            float balance;

            cout << "\n Fixed Deposit============";
            cout << "\n enter Customer name : ";
            cin >> name;
            cout << "\n enter Depsit balance : ";
            cin >> balance;

            acc_arr[i] = new FD_Account(name, balance);

            break;
        }
        }
    }

    for (int i = 0; i < noa; i++)
    {
        PrintDetails::details(acc_arr[i]);
    }

    // clear memory

    for (int i = 0; i < noa; i++)
    {
        delete acc_arr[i];
    }

    delete[] acc_arr;

    return 0;
}