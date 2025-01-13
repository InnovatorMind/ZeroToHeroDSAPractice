// Write a program to find the Nth term of the Fibonacci series.

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    // Find the Nth term of the Fibonacci series
    int a = 0, b = 1, nthTerm;
    if (N == 0)
        nthTerm = a;
    else if (N == 1)
        nthTerm = b;
    else
    {
        for (int i = 2; i <= N; ++i)
        {
            nthTerm = a + b;
            a = b;
            b = nthTerm;
        }
    }
    cout << "The " << N << "th term of the Fibonacci series is: " << nthTerm << endl;

    return 0;
}
