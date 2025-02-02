// What is a pointer to an integer?
// How do you declare a pointer to a character? 
// Can you explain what a pointer to a float is and how it is used?

#include <iostream>
using namespace std;

int main() {
    // Pointer to an integer
    int num = 10;
    int *intPtr = &num;
    cout << "Value of num using intPtr: " << *intPtr << endl;
    cout << "Address of num: " << intPtr << endl;

    // Pointer to a character
    char ch = 'A';
    char *charPtr = &ch;
    cout << "Value of ch using charPtr: " << *charPtr << endl;
    cout << "Address of ch: " << charPtr << endl;

    // Pointer to a float
    float fnum = 5.5;
    float *floatPtr = &fnum;
    cout << "Value of fnum using floatPtr: " << *floatPtr << endl;
    cout << "Address of fnum: " << floatPtr << endl;

    return 0;
}
