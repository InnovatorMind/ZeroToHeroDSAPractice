// Understand about Pointer To Pointer

#include <iostream>
using namespace std;

int main() {
    int num = 10; // Declare an integer variable
    int *ptr = &num; // ptr is a pointer to an integer
    int **pptr = &ptr; // pptr is a pointer to a pointer

    cout << "Value of num: " << num << endl;
    cout << "Value of num using ptr: " << *ptr << endl;
    cout << "Value of num using pptr: " << **pptr << endl;
    cout << "Address of num: " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Address of pptr: " << &pptr << endl;

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

// variable: pptr
//    +----------------+
//    |                |
//    | 0x7fffbf4a4b90 |
//    |                |
//    +----------------+
// address: 0x7fffbf4a4b88
