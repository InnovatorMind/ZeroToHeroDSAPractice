// 💡 Explanation:
// This program introduces arrays and demonstrates how to declare, initialize, and access elements.

#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and print elements
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;
    cout << "Third element: " << numbers[2] << endl;
    cout << "Fourth element: " << numbers[3] << endl;
    cout << "Fifth element: " << numbers[4] << endl;

    return 0;
}

// 📌 Key Takeaways:
// ✅ Arrays are zero-indexed (i.e., the first element is at index 0).
// ✅ Elements are stored in contiguous memory locations.