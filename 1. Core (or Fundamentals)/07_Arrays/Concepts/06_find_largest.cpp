// 💡 Explanation:
// This program finds the largest number in an array by iterating through all elements.

#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {12, 45, 23, 67, 34};
    int max = numbers[0]; // Assume the first element is the largest

    // Compare each element with max
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "Largest number: " << max << endl;
    return 0;
}

// 📌 Key Takeaways:
// ✅ Initialize max with the first element before comparison.
// ✅ Loop through remaining elements and update max if a larger value is found.