// Write a program to input a character from the user and print its ASCII code

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "The ASCII code for " << ch << " is: " << int(ch) << endl;

    return 0;
}
