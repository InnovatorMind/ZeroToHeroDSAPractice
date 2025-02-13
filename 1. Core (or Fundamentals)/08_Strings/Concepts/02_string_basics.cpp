// 💡 Explanation:
// Introduces both character arrays and the string class.

#include <iostream>
#include <string> // Required for string class
using namespace std;

int main() {
    // Using character array (C-style string)
    char charArray[] = "Hello";

    // Using string class
    string str = "Hello, C++!";

    cout << "Character Array: " << charArray << endl;
    cout << "String Class: " << str << endl;

    return 0;
}

// 📌 Key Takeaways:
// ✅ Character arrays need a null terminator (\0).
// ✅ string class is more flexible and easier to work with.