// Pass an array to a function using reference.

// Write a function that takes an array and its size as arguments using reference parameters.
// The function should modify the array elements and print them.

#include <iostream>
using namespace std;

// Function to modify and print array elements
void modifyAndPrintArray(int (&arr)[5]) {
    cout << "Modified array elements:" << endl;
    for (int i = 0; i < 5; ++i) {
        arr[i] *= 2; // Modify each element by multiplying by 2
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Original array elements:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    modifyAndPrintArray(arr); // Pass the array by reference

    return 0;
}

