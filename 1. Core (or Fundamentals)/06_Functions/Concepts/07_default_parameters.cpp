#include <iostream>
using namespace std;

// Function with default parameters
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();              // Calls with default value "Guest"
    greet("Alice");       // Calls with argument "Alice"
    return 0;
}

// Explanation:

// Default parameters allow calling the function without providing all arguments.
// If no value is passed, the default one ("Guest") is used.

