// Understand referance variable

#include <iostream>
using namespace std;

int main() {
    int original = 10;
    int &ref = original; // ref is a reference to original

    cout << "Original value: " << original << endl;
    cout << "Reference value: " << ref << endl;

    ref = 20; // Changing the reference changes the original variable

    cout << "New original value: " << original << endl;
    cout << "New reference value: " << ref << endl;

    return 0;
}

// It provides an alternative name to access the same memory location 
// as the original variable.
//  Once a reference is initialized to a variable,
// both the reference and the original variable refer to the same value
//  and any changes made through one are reflected in the other.

// Original value: 10
// Reference value: 10
// New original value: 20
// New reference value: 20

