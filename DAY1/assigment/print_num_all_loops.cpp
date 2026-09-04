#include <iostream>
using namespace std;

void dowhile(int i, int n)
{
    do
    {
        cout << i << endl;
        i++;

    } while (i <= n);
}

void whileloop(int i, int n)
{
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
}

void forloop(int i, int n)
{
    for (i; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    int n, i = 1;

    cout << "Enter Number to print elements from 1 to N: \n";
    cin >> n;

    cout << "=============== Do While Loop ==============\n";
    dowhile(i, n);

    cout << "=============== While Loop ==============\n";
    whileloop(i, n);

    cout << "=============== For Loop ==============\n";
    forloop(i, n);

    return 0;
}