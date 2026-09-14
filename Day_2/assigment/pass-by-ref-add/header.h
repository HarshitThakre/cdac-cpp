#include <iostream>
using namespace std;

void swap_by_add(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_by_ref(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sum_and_diff(int &a, int &b)
{
    cout << "\n Sum: " << a + b;
    cout << "\n Diff: " << a - b << endl;
}

void reverse_num(int &num)
{
    int digit, temp = 0;

    cout << "Before reversing : " << num << endl;

    while (num > 0)
    {

        digit = num % 10;
        temp = (temp * 10) + digit;
        num = num / 10;
    }

    num = temp;
    cout << "Reversed num : " << num << endl;
}