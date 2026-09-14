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