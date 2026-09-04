#include <iostream>
using namespace std;

double calculateBill(int units)
{

    double bill = 0;

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    return bill;
}

int main()
{
    int units;
    cout << "Enter electricity units consumed: ";
    cin >> units;

    double totalBill = calculateBill(units);
    cout << "Total Bill:" << totalBill << endl;

    cout << "\nSlabs used:\n";
    cout << "0–100 units : 5 per unit\n";
    cout << "101–200 units : 7 per unit\n";
    cout << "201–300 units : 10 per unit\n";
    cout << "Above 300 units :  12 per unit\n";

    return 0;
}