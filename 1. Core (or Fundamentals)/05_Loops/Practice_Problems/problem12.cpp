// Write a program to calculate sum of first N even natural numbers

#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;
    cout << "Enter a number: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    { 
        sum += 2 * i;
    }
    cout << "Sum of first " << N << " even natural numbers is " << sum << endl;
    return 0;
}
