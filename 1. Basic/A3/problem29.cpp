// Write a program to print numbers
// from 1 to 100, but skip the multiples of 5.

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; ++i)
    {
        if (i % 5 == 0)
        {
            continue; // Skip multiples of 5
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
