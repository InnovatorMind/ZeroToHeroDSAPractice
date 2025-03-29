// Write a program to make the last digit of a number stored in a variable as zero. 
// (Example - if x=2345 then make it x=2340)

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    number = (number / 10) * 10;
    cout << "Number after making the last digit zero: " << number << endl;
    return 0;
}
