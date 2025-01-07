// Write a program to check whether a given number is
// divisible by 7 or divisible by 3

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 7 == 0 || number % 3 == 0)
    {
        cout << "The number is divisible by 7 or 3.";
    }
    else
    {
        cout << "The number is not divisible by 7 or 3.";
    }
    return 0;
}
