#include <iostream>
using namespace std;

int main()
{
    int n, factorial = 1;
    cout << "Enter a Num:";
    cin >> n;

    cout << "Factorial of " << n << endl;

    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;
}