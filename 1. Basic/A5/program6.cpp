//  Try to guess the output

#include <iostream>
using namespace std;

int main() {
    int num = 10; // Declare an integer variable
    int *ptr;    // Declare a pointer to an integer

    ptr = &num;  // Assign the address of num to ptr

    cout << "Value of num using pointer: " << num << endl; // Print the value of num using the pointer
    cout << "Value of num using pointer: " << &num << endl; // Print the address of num
    cout << "Value of num using pointer: " << *(&num) << endl; // Print the value of num using pointer dereference
    cout << "Value of num using pointer: " << ptr << endl; // Print the address stored in ptr
    cout << "Value of num using pointer: " << &ptr << endl; // Print the address of ptr
    cout << "Value of num using pointer: " << *ptr << endl; // Print the value of num using the pointer

    return 0;
}


// variable: num
//    +---------+
//    |         |
//    |    10   |
//    |         |
//    +---------+
// address: 0x7fffbf4a4b98

// variable: ptr
//    +----------------+
//    |                |
//    | 0x7fffbf4a4b98 |
//    |                |
//    +----------------+
// address: 0x7fffbf4a4b90
