// How to access address of a variable

#include <iostream>

using namespace std;

int main() {
    int number = 10;
    float price = 9.99;
    char letter = 'A';

    cout << "Address of number: " << &number << endl; 
    cout << "Address of price: " << &price << endl;
    cout << "Address of letter: " << &letter << endl; 

    return 0;
}


// variable: number       variable: price       variable: letter
//    +---------+            +---------+            +---------+
//    |         |            |         |            |         |
//    |    10   |            |   9.99  |            |    A    |
//    |         |            |         |            |         |
//    +---------+            +---------+            +---------+
// address: 0x7fffbf4a4b98 address: 0x7fffbf4a4b94 address: 0x7fffbf4a4b92
