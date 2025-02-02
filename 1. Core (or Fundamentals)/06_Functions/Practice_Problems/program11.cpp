// Write a function printArray that takes an array of integers and 
// its size as parameters and prints all the elements of the array. 
// Call this function from the main function to display the elements of a given array.

#include <iostream>
using namespace std;

// Function to print an array of integers
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the printArray function
    printArray(arr, size);

    return 0;
}
