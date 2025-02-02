// TO calculate the sum of two integers. Number are taken from user through Keyboard

#include <iostream>
using namespace std;
int main()
{
    int a, b, sum;
    cout << "Enter value of a number: ";
    cin >> a;
    cout << "Enter value of b number: ";
    cin >> b;
    sum = a + b;

    cout << "Sum is: " << sum;

    // or
    // cout << "Enter value of a and b number: ";
    // cin>>a>>b;

    return 0;
}
