#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // Using reference in range-based for loop (foreach loop)
    for (int& num : arr) {
        num *= 2;  // Modifying the original array elements
    }

    // Printing updated array
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
