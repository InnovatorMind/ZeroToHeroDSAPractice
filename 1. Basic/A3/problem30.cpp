// Write a program to print only the positive numbers from a given array of integers.
// Example array {-1, 2, -3, 4, -5, 6, -7, 8, 0, -9, 10}

#include <iostream>
using namespace std;

int main() {
    int arr[] = {-1, 2, -3, 4, -5, 6, -7, 8, 0, -9, 10}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Positive numbers in the array are: ";
    for (int i = 0; i < size; ++i) {
        if (arr[i] <= 0) {
            continue; // Skip non-positive numbers
        }
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
