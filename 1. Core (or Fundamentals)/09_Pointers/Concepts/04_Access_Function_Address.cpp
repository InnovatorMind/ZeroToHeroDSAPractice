// How to access address of a Function

#include <iostream>
using namespace std;

void myFunction() {
    // Function body (currently empty)
}

int main() {
    cout << "Address of myFunction: " << &myFunction << endl; 

    return 0;
}


// variable: myFunction
//    +-----------------+
//    | myFunction()    |
//    +-----------------+
// address: 0x7fffbf4a4b80


