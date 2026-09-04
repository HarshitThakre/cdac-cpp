#include <iostream>
using namespace std;

int main()
{

    int a, b;
    char op;

    cout << "Enter 1st Num: ";
    cin >> a;

    cout << "Enter 2nd Num: ";
    cin >> b;

    cout << "Choose operator : '+', '-', '*', '/',  '%' : ";
    cin >> op;

    switch (op)
    {

    case ('+'):
        cout << a + b << endl;
        break;
    case ('-'):
        cout << a - b << endl;
        break;
    case ('*'):
        cout << a * b << endl;
        break;
    case ('/'):
        cout << a / b << endl;
        break;
    case ('%'):
        cout << a % b << endl;
        break;
    default:
        cout << "Invalid Operater !\n";
    }

    return 0;
}