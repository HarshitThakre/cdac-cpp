#include <iostream>

using namespace std;

int num1, num2, num3;

int find_max(int num1, int num2, int num3)
{

    if (num1 >= num2 and num1 >= num3)
    {
        return num1;
    }
    else if (num2 >= num1 and num2 >= num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    cout << "ENter a num1: " << endl;
    cin >> num1;

    cout << "ENter a num2: " << endl;
    cin >> num2;

    cout << "ENter a num3: " << endl;
    cin >> num3;

    cout << "largest: " << find_max(num1, num2, num3) << endl;

    return 0;
}