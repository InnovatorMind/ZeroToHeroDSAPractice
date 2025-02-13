// 💡 Explanation:
// Demonstrates string comparison using ==, !=, and .compare().

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "apple";
    string str2 = "banana";

    // Using relational operators
    if (str1 == str2) {
        cout << "Strings are equal!" << endl;
    } else {
        cout << "Strings are different!" << endl;
    }

    // Using compare() function
    int result = str1.compare(str2);
    if (result < 0)
        cout << str1 << " comes before " << str2 << " alphabetically." << endl;
    else if (result > 0)
        cout << str1 << " comes after " << str2 << " alphabetically." << endl;
    else
        cout << "Strings are equal!" << endl;

    return 0;
}

// 📌 Key Takeaways:
// ✅ Use == and != for basic string comparison.
// ✅ .compare() returns negative, zero, or positive for ordering.

