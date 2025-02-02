//  Write a program to print all Prime numbers under 100

#include <iostream>
using namespace std;

int main()
{
    cout << "Prime numbers under 100 are: ";

    for (int num = 2; num < 100; ++num)
    {
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
