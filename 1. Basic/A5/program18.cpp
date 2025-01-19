// Write a program to pass an array to a function using a pointer and modify the array elements within the function.

#include <iostream>
using namespace std;

// Function to modify array elements
void modifyArray(int *arr, int size) {
    cout << "Modified array elements:" << endl;
    for (int i = 0; i < size; ++i) {
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

    modifyArray(arr, 5); // Pass the array by pointer

    return 0;
}
