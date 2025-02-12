// 💡 Explanation:
// This program demonstrates how to modify an existing array element.

#include <iostream>
using namespace std;

int main() {
    int numbers[3] = {5, 10, 15};

    cout << "Before modification: " << numbers[1] << endl;

    // Modify the second element
    numbers[1] = 20;

    cout << "After modification: " << numbers[1] << endl;
    return 0;
}

// 📌 Key Takeaways:
// ✅ You can change an array element by assigning a new value to it.