#include <iostream>
using namespace std;

int main()
{

    int choice;
    float radius, length, width, side, base, height;

    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Square" << endl;
    cout << "4. Area of Triangle" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {

    case 1:
        cout << "Enter radius: ";
        cin >> radius;

        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
        break;

    case 2:
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        cout << "Area of Rectangle = " << length * width << endl;
        break;

    case 3:
        cout << "Enter side: ";
        cin >> side;

        cout << "Area of Square = " << side * side << endl;
        break;

    case 4:
        cout << "Enter base: ";
        cin >> base;

        cout << "Enter height: ";
        cin >> height;

        cout << "Area of Triangle = " << 0.5 * base * height << endl;
        break;

    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}