// Write a program to change the value of an integer variable using a pointer.

#include <iostream>
using namespace std;

int main() {
    int num = 10; // Declare an integer variable
    int *ptr;    // Declare a pointer to an integer

    ptr = &num;  // Assign the address of num to ptr

    *ptr = 20;   // Change the value of num using the pointer

    cout << "New value of num using pointer: " << num << endl; // Print the new value of num

    return 0;
}
