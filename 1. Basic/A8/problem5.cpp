// Write a recursive function to calculate the factorial of a number.


#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}

// Output
// ./problem5.exe 
// Enter a number: 16
// Factorial of 16 is 20922789888000

// ./problem5.exe 
// Enter a number: 5
// Factorial of 5 is 120