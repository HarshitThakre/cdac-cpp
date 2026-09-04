#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid input! Marks must be between 0 and 100." << endl;
    }
    else
    {
        if (marks >= 90 && marks <= 100)
        {
            cout << "Grade: A" << endl;
        }
        else if (marks >= 75 && marks <= 89)
        {
            cout << "Grade: B" << endl;
        }
        else if (marks >= 60 && marks <= 74)
        {
            cout << "Grade: C" << endl;
        }
        else if (marks >= 40 && marks <= 59)
        {
            cout << "Grade: D" << endl;
        }
        else
        {
            cout << "Grade: Fail" << endl;
        }
    }

    return 0;
}