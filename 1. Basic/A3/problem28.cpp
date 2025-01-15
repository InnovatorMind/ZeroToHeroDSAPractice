// Write a program to find
// next Prime number of a given number

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int nextPrime = num + 1; // Start checking from the next number

    while (true)
    {
        int isPrime = 1; // Assume the number is prime
        for (int i = 2; i <= nextPrime / 2; ++i)
        {
            if (nextPrime % i == 0)
            {
                isPrime = 0; // Not prime
                break;
            }
        }
        if (isPrime == 1)
        {
            cout << "The next prime number after " << num << " is: " << nextPrime << endl;
            break;
        }
        nextPrime++;
    }

    return 0;
}
