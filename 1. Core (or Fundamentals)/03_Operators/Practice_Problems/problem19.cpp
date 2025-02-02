// Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.

#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    ch++;
    cout << "Changed value of char variable: " << ch << endl; // Output will be 'B'
    return 0;
}
