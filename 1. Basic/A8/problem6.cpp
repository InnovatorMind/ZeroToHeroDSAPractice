// Use recursion to check if a given string is a palindrome.

#include <iostream>
using namespace std;

bool isPalindrome(string str, int left, int right) {
    if (left >= right) return true;  // Base case: single character or empty string
    if (str[left] != str[right]) return false;  // Mismatch found, not a palindrome
    return isPalindrome(str, left + 1, right - 1);  // Recursive call
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is NOT a palindrome." << endl;

    return 0;
}

