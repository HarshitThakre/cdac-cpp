#include "header.h"

int main()
{
    int a = 10, b = 5;

    // by address
    cout << "\n before swap a & b :  " << a << " " << b;
    swap_by_add(&a, &b);

    cout << "\n After swap a & b :  " << a << " " << b << endl;

    // by reference
    cout << "\n before swap a & b :  " << a << " " << b;
    swap_by_ref(a, b);

    cout << "\n After swap a & b :  " << a << " " << b << endl;

    return 0;
}