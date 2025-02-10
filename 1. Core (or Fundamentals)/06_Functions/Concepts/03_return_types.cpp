#include <iostream>
using namespace std;

// Function returning an integer
int add(int a, int b) {
    return a + b;
}

// Function returning a float
float divide(float x, float y) {
    return x / y;
}

// Function returning void (no return value)
void displayMessage() {
    cout << "This is a function with void return type." << endl;
}

int main() {
    int sum = add(10, 20);
    cout << "Sum: " << sum << endl;

    float quotient = divide(10.5, 2.0);
    cout << "Quotient: " << quotient << endl;

    displayMessage();

    return 0;
}

// Explanation:

// add() returns an integer sum.
// divide() returns a floating-point result.
// displayMessage() has a void return type, meaning it doesn’t return any value.