#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        cout << "Table of " << i << endl;
        for (int j = 1; j <= n; j++)
        {

            cout << i * j << endl;
        }
    }

    return 0;
}