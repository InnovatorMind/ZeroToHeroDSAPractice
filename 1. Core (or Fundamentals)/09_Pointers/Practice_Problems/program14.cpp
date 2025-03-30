// Create a function that takes a reference to a pointer and modifies the pointer to point to a new integer.


#include <iostream>
using namespace std;

void modifyPointer(int*& ptr) {
    int newValue = 100;
    ptr = &newValue; // Modify the pointer to point to a new integer
}

int main() {
    int num = 10;
    int* ptr = &num; // Pointer to num

    cout << "Original pointer value: " << *ptr << endl;

    modifyPointer(ptr); // Pass the pointer by reference

    cout << "New pointer value: " << *ptr << endl;

    return 0;
}


