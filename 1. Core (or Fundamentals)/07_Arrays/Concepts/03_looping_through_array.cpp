// 💡 Explanation:
// This program demonstrates looping through an array using a for loop.

#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    // Using a loop to access array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    
    cout << endl;
    return 0;
}

// 📌 Key Takeaways:
// ✅ Instead of printing each element manually, use a loop to iterate through the array.
// ✅ i < 5 ensures we stay within valid indices.