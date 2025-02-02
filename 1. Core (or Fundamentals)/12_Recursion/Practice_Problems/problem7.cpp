// Print an Array in Reverse Order
// Use recursion to print an array in reverse.

#include <iostream>
using namespace std;

void printReverse(int arr[], int index) {
    if (index < 0) return;  // Base case: Stop when index is negative
    cout << arr[index] << " ";  // Print the current element
    printReverse(arr, index - 1);  // Recursive call for the previous element
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array in reverse order: ";
    printReverse(arr, size - 1);  // Start from the last index

    return 0;
}


