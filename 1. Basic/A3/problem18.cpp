// Write a program to check whether a given number is a Prime number or not

#include <iostream>
using namespace std;

int main()
{
    int num, i, flag = 1;
    cout << "Enter a number: ";
    cin >> num;

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (num == 1 || num == 0)
    {
        flag = 0;
    }

    if (flag == 1 && num > 1)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
