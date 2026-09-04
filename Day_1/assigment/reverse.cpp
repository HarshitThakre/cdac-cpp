#include <iostream>
using namespace std;

int main()
{
    int n, reverse = 0;
    cout << "Enter a Num:";
    cin >> n;

    int temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;

        reverse = reverse * 10 + digit;

        temp = temp / 10;
    }

    if (reverse == n)
        cout << "Palindrome \n";
    else
        cout << "Not Plaindrome !\n";

    return 0;
}