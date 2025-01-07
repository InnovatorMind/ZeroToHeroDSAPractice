// Write a program to check whether a number is divisible by 5 or not

#include <iostream>
using namespace std;
int main()
{
    int num = 5;

    if (num % 5 == 0) {
        cout << "Number is divisible by 5";
    } else {
        cout << "Number is not divisible by 5";
    }

    return 0;
}