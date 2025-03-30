//  Reference to a reference.

// Write a program to demonstrate the concept of a reference to a reference.
//  Create a reference to an integer, then create a reference to that reference,
//  and modify the value through the double reference.

#include <iostream>
using namespace std;

void modifyValue(int &ref1, int &ref2) {
    ref2 = 20; // Modify the value through the double reference
}

int main() {
    int num = 10;
    int &ref1 = num; // Reference to num
    int &ref2 = ref1; // Reference to the reference

    cout << "Original value: " << num << endl;
    cout << "Reference value: " << ref1 << endl;
    cout << "Double reference value: " << ref2 << endl;

    modifyValue(ref1, ref2);

    cout << "New original value: " << num << endl;
    cout << "New reference value: " << ref1 << endl;
    cout << "New double reference value: " << ref2 << endl;

    return 0;
}

