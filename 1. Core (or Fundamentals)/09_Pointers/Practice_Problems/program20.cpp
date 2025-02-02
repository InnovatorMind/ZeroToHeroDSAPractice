// Write a code that demonstrates passing an array using simple (by value), pointer, and reference methods

#include <iostream>
using namespace std;

// Simple method (by value)
void printArraySimple(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Pointer method
void modifyArrayPointer(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2; // Modify each element by multiplying by 2
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Reference method
void modifyArrayReference(int (&arr)[5]) {
    for (int i = 0; i < 5; ++i) {
        arr[i] *= 2; // Modify each element by multiplying by 2
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Original array elements (Simple Method):" << endl;
    printArraySimple(arr, 5);

    cout << "Modified array elements (Pointer Method):" << endl;
    modifyArrayPointer(arr, 5);

    cout << "Modified array elements (Reference Method):" << endl;
    modifyArrayReference(arr);

    return 0;
}

