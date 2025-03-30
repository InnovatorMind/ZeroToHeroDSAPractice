// Create a function that takes a pointer to an integer and modifies the value of the integer through the pointer.

#include <iostream>
using namespace std;

void modifyValue(int *ptr) {
    *ptr = 30; // Modify the value through the pointer
}

int main() {
    int num = 10;
    cout << "Original value: " << num << endl;

    modifyValue(&num); // Pass the address of num to the function

    cout << "Modified value: " << num << endl;

    return 0;
}
