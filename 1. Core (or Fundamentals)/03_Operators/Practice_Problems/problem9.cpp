// Write a Program to Swap values of two int variables without using third variable and without using +, - operators:

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
