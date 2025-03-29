// Write a program to input three characters from the user and display characters with their corresponding ASCII codes.

#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;
    cout << "Enter three characters: ";
    cin >> ch1 >> ch2 >> ch3;

    cout << "ASCII codes:\n";
    cout << ch1 << ": " << int(ch1) << endl;
    cout << ch2 << ": " << int(ch2) << endl;
    cout << ch3 << ": " << int(ch3) << endl;

    return 0;
}
