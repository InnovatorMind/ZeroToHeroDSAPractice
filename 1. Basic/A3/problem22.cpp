// Write a program to print first N terms of Fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    // Print the first N terms of the Fibonacci series
    int a = 0, b = 1;
    cout << "The first " << N << " terms of the Fibonacci series are: ";
    for (int i = 1; i <= N; ++i)
    {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;

    return 0;
}
