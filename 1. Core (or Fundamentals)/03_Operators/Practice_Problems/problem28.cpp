// Swap values of two int variables in a single line arithmetic expression

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    a = (a + b) - (b = a);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
