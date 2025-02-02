// Implement Binary Search

#include <iostream>
using namespace std;

// Recursive function for Binary Search
int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) return -1;  // Base case: element not found

    int mid = low + (high - low) / 2;  // Calculate middle index

    if (arr[mid] == target) return mid;  // If the middle element matches the target, return the index
    else if (arr[mid] < target) return binarySearch(arr, mid + 1, high, target);  // Search right half
    else return binarySearch(arr, low, mid - 1, target);  // Search left half
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
