// Reverse a String Using Recursion

#include <iostream>
using namespace std;

void reverseString(string str, int index) {
    if (index < 0) return;  // Base case
    cout << str[index];
    reverseString(str, index - 1);  // Recursive call
}

int main() {

    string str;
    cout << "Enter any String: ";
    cin >> str;

    reverseString(str, str.length() - 1);
    return 0;
}

