// Write a program which takes
//  the month number as an input and display number of days in that month.

#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "This month has 31 days.";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "This month has 30 days.";
        break;
    case 2:
        cout << "February has 28 or 29 days (29 in a leap year).";
        break;
    default:
        cout << "Invalid month number.";
    }

    return 0;
}
