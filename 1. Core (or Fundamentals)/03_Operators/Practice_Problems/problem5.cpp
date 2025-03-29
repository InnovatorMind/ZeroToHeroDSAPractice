// Write a program to print unit digit of a given number

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int unit_digit = number % 10;
    cout << "Unit digit: " << unit_digit << endl;
    return 0;
}


// output./problem3.exe
// Enter a number: 443
// Unit digit: 3
