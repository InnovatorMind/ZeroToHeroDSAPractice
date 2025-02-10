#include <iostream>
using namespace std;

// Recursive function for factorial
int factorial(int n) {
    if (n == 0) return 1;  // Base case
    return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}

// Explanation:

// A function calls itself to calculate factorial (n! = n × (n-1)!).
// The base case if (n == 0) return 1; prevents infinite recursion.