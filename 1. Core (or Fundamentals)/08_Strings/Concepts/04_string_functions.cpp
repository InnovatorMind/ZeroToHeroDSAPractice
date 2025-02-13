// 💡 Explanation:
// Demonstrates useful string operations like finding length, concatenation, and substring extraction.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = " World";

    // Length of a string
    cout << "Length of str1: " << str1.length() << endl;

    // Concatenation
    string combined = str1 + str2;
    cout << "Concatenated String: " << combined << endl;

    // Substring extraction
    cout << "Substring (first 4 chars): " << combined.substr(0, 4) << endl;

    return 0;
}

// 📌 Key Takeaways:
// ✅ .length() gives the length of a string.
// ✅ Use + to concatenate strings.
// ✅ .substr(start, length) extracts a substring.