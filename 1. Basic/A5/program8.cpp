// Write a program to create an array of integers and print the address of the first element using a pointer.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
    int *ptr;                     // Declare a pointer to an integer

    ptr = arr; // Assign the address of the first element of the array to ptr

    cout << "Address of the first element of the array: " << ptr << endl; // Print the address of the first element

    return 0;
}

// variable: arr
//    +---------+---------+---------+---------+---------+
//    |         |         |         |         |         |
//    |    1    |    2    |    3    |    4    |    5    |
//    |         |         |         |         |         |
//    +---------+---------+---------+---------+---------+
// address: 0x7fffbf4a4b90
// address: 0x7fffbf4a4b94
// address: 0x7fffbf4a4b98
// address: 0x7fffbf4a4b9c
// address: 0x7fffbf4a4ba0
// address: 0x7fffbf4a4b90 (arr)
