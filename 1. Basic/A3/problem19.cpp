// Write a program to calculate LCM of two numbers

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, max;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    max = (num1 > num2) ? num1 : num2;

    while (true)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << "LCM of " << num1 << " and " << num2 << " is " << max << endl;
            break;
        }
        max++;
    }

    return 0;
}

