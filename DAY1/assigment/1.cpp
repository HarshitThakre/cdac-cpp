#include <iostream>
using namespace std;

int num;

string check_sign(int num)
{
    if (num > 0)
    {
        return "+ve";
    }
    else if (num < 0)
    {
        return "-ve";
    }

    else
    {
        return "zero";
    }
}

int main()
{

    cout << "Enter a number: " << endl;
    cin >> num;

    cout << check_sign(num) << endl;

    return 0;
}