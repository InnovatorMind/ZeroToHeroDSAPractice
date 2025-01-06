// Write a program to print a given number without its last digit

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int number_without_last_digit = number / 10;
    cout << "Number without last digit: " << number_without_last_digit << endl;
    return 0;
}

// ./problem4.exe
// Enter a number: 4453
// Number without last digit: 445