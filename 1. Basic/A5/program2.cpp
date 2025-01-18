// How to access address of an array

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 

    cout << "Address of arr[0]: " << &arr[0] << endl; // Address of the first element
    cout << "Address of arr[0]: " << &arr[1] << endl; // Address of the first element
    cout << "Address of arr: " << arr << endl;     // Address of the array itself (same as &arr[0])

    return 0;
}


// variable: arr
//    +---------+---------+---------+---------+---------+
//    |         |         |         |         |         |
//    |    1    |    2    |    3    |    4    |    5    |
//    |         |         |         |         |         |
//    +---------+---------+---------+---------+---------+
// address: 0x7fffbf4a4b90
