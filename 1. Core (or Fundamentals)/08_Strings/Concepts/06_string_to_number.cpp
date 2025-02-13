// 💡 Explanation:
// Demonstrates how to convert numbers to strings and vice versa using stoi(), stod(), and to_string().

#include <iostream>
#include <string>
using namespace std;

int main() {
    string numStr = "123";
    
    // Convert string to integer
    int num = stoi(numStr);
    cout << "Integer: " << num << endl;

    // Convert string to double
    double numDouble = stod("45.67");
    cout << "Double: " << numDouble << endl;

    // Convert number to string
    string strNum = to_string(789);
    cout << "String from number: " << strNum << endl;

    return 0;
}

// 📌 Key Takeaways:
// ✅ stoi() → Converts string to integer.
// ✅ stod() → Converts string to double.
// ✅ to_string() → Converts number to string.