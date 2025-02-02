//  Write a program to print a table of 5.

#include <iostream>

using namespace std;

int main()
{
    cout << "Table of 5:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "5 x " << i << " = " << 5 * i << endl;
    }

    return 0;
}