// Write a program to calculate sum of squares of first N natural numbers

#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;
    cout << "Enter a number: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    { 
        sum += i * i;
    }
    cout << "Sum of squares of first " << N << " natural numbers is " << sum << endl;
    return 0;
}
