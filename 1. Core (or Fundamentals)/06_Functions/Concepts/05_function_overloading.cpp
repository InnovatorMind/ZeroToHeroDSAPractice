#include <iostream>
using namespace std;

// Function with int parameters
int multiply(int a, int b) {
    return a * b;
}

// Function with float parameters
float multiply(float a, float b) {
    return a * b;
}

// Function with three parameters
int multiply(int a, int b, int c) {
    return a * b * c;
}

int main() {
    cout << "Multiplication (int): " << multiply(5, 2) << endl;
    cout << "Multiplication (float): " << multiply(2.5f, 1.5f) << endl;
    cout << "Multiplication (three int): " << multiply(2, 3, 4) << endl;

    return 0;
}


// Explanation:

// Function overloading allows multiple functions with the same name but different parameters.
// The correct function is called based on the argument types.