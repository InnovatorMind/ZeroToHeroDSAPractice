#include <iostream>
using namespace std;

int main() {
    cout << "Demonstrating continue statement:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) continue; // Skips iteration when i == 5
        cout << i << " ";
    }
    cout << endl;

    cout << "Demonstrating break statement:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 7) break; // Stops loop when i == 7
        cout << i << " ";
    }
    cout << endl;

    return 0;
}


// 📌 Explanation:

// continue skips an iteration:
// When i == 5, continue skips printing 5 but continues the loop.
// Output: 1 2 3 4 6 7 8 9 10 (Notice 5 is missing).
// break exits the loop:
// When i == 7, break stops the loop completely.
// Output: 1 2 3 4 5 6 (Loop stops at 7, so 7-10 are missing).