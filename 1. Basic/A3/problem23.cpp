// Write a program to check whether a given number is there in the Fibonacci series or not.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int a = 0, b = 1, nextTerm = a + b;
    int found = 0;

    // Check if the number is in the Fibonacci series
    if (num == 0 || num == 1)
    {
        found = 1;
    }
    else
    {
        while (nextTerm <= num)
        {
            if (nextTerm == num)
            {
                found = 1;
                break;
            }
            a = b;
            b = nextTerm;
            nextTerm = a + b;
        }
    }

    if (found == 1)
    {
        cout << num << " is in the Fibonacci series." << endl;
    }
    else
    {
        cout << num << " is not in the Fibonacci series." << endl;
    }

    return 0;
}
