// Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. 
// (Example - number=234 and digit-9 then the resulting number is 2349)

#include <iostream>
using namespace std;

int main() {
    int number, digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter a digit to append: ";
    cin >> digit;
    number = number * 10 + digit;
    cout << "Resulting number: " << number << endl;
    return 0;
}
