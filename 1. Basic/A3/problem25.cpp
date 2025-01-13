// Write a program to check whether two given numbers are co-prime numbers or not

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, minNum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Find the minimum of the two numbers
    minNum = (num1 < num2) ? num1 : num2;

    // Calculate HCF
    int hcf = 1;
    for (int i = 1; i <= minNum; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    // Check if HCF is 1
    if (hcf == 1)
    {
        cout << num1 << " and " << num2 << " are co-prime numbers." << endl;
    }
    else
    {
        cout << num1 << " and " << num2 << " are not co-prime numbers." << endl;
    }

    return 0;
}
