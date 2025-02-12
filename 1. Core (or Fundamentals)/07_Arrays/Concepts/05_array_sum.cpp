// 💡 Explanation:
// This program calculates the sum of all elements in an array using a loop.

#include <iostream>
using namespace std;

int main() {
    int numbers[4] = {1, 2, 3, 4};
    int sum = 0;

    // Loop through array to add elements
    for (int i = 0; i < 4; i++) {
        sum += numbers[i];
    }

    cout << "Sum of elements: " << sum << endl;
    return 0;
}

// 📌 Key Takeaways:
// ✅ Arrays help store multiple values efficiently.
// ✅ Loops make it easy to process arrays (e.g., sum, average).