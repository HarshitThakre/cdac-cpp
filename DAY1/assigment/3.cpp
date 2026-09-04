#include <iostream>

using namespace std;

int num1, num2;

int find_max(int num1, int num2)
{

    if (num1 > num2)
    {
        return num1;
    }
    else if (num1 == num2)
    {
        return 0;
    }
    else
    {
        return num2;
    }
}

int main()
{
    cout << "ENter a num1: " << endl;
    cin >> num1;

    cout << "ENter a num1: " << endl;
    cin >> num2;

    cout << find_max(num1, num2) << endl;

    return 0;
}