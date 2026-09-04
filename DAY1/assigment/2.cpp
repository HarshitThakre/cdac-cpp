#include <iostream>

using namespace std;

int num;

string check_even(int num)
{
    if (num % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "odd";
    }
}

int main()
{

    cout << "Enter Number: " << endl;

    cin >> num;

    cout << check_even(num) << endl;

    return 0;
}