// 💡 Explanation:
// Demonstrates how getline() is used to take multi-word input.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your full name: ";
    getline(cin, name);  // Reads entire line including spaces

    cout << "Hello, " << name << "!" << endl;
    return 0;
}

// 📌 Key Takeaways:
// ✅ cin stops reading at spaces, but getline() reads the entire line.
// ✅ Always use getline() when dealing with multi-word input.