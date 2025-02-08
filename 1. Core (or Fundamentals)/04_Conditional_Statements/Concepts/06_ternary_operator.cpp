#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int max = (a > b) ? a : b;  // Using ternary operator to find the maximum number
    cout << "The larger number is: " << max << endl;

    return 0;
}
