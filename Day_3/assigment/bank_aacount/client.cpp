#include "array_ops.h"

int main()
{
    int noe;
    Account *acc_arr;

    Arrayops::allocate(acc_arr, noe);
    Arrayops::accept(acc_arr, noe);
    Arrayops::display(acc_arr, noe);

    Arrayops::deposit(acc_arr, noe);
    Arrayops::withdraw(acc_arr, noe);

    Arrayops::deallocate(acc_arr);

    return 0;
}