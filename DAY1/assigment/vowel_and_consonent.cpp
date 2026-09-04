#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    switch (ch)
    {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "It is a vowel" << endl;
        break;

    default:
        cout << "It is a consonant" << endl;
    }

    return 0;
}