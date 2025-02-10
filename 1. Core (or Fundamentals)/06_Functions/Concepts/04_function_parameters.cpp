#include <iostream>
using namespace std;

// Pass by Value (original variable remains unchanged)
void passByValue(int x) {
    x = 20;  
}

// Pass by Reference (original variable is modified)
void passByReference(int &x) {
    x = 20;  
}

int main() {
    int a = 10, b = 10;

    passByValue(a);
    cout << "After passByValue, a = " << a << endl;  // Remains 10

    passByReference(b);
    cout << "After passByReference, b = " << b << endl;  // Changes to 20

    return 0;
}

// Explanation:

// passByValue() takes a copy of x, so the original value remains unchanged.
// passByReference() takes a reference (&), modifying the original variable.