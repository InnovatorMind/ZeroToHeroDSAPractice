#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    // Using range-based for loop (foreach style)
    for (int num : numbers) {
        cout << num << " "; // Output: 1 2 3 4 5
    }

    return 0;
}
