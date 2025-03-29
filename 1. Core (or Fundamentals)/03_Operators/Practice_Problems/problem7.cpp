// Write a program to swap values of two int variables

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter two integers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
