// Write a program to print all Prime numbers between two given numbers

#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Enter two numbers (start and end): ";
    cin >> start >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int num = start; num <= end; ++num)
    {
        if (num < 2)
            continue;    // Skip numbers less than 2
        int isPrime = 1; // Assume the number is prime

        for (int i = 2; i <= num / 2; ++i)
        {
            if (num % i == 0)
            {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime == 1)
        {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}
