// Check wheather a given number is an even or odd
//  using bitwise operator

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number & 1)
    {
        cout << "The number is odd.";
    }
    else
    {
        cout << "The number is even.";
    }

    return 0;
}
