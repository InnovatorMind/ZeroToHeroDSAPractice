// Implement Linear Search 


#include <iostream>
using namespace std;

// Recursive function for Linear Search
int linearSearch(int arr[], int size, int target, int index = 0) {
    if (index >= size) return -1;  // Base case: If index is out of bounds, return -1
    if (arr[index] == target) return index;  // If the target is found, return the index
    return linearSearch(arr, size, target, index + 1);  // Recursive call for next element
}

int main() {
    int arr[] = {5, 3, 8, 6, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = linearSearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
