// Write a program to calculate HCF of two numbers

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, hcf;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Find HCF using the Euclidean algorithm
    int a = num1, b = num2;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    cout << "The HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0;
}
