// Write a program to check whether a given number is
//  divisible by 3 and divisible by 2.

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 3 == 0 && number % 2 == 0)
    {
        cout << "The number is divisible by both 3 and 2.";
    }
    else
    {
        cout << "The number is not divisible by both 3 and 2.";
    }
    return 0;
}


