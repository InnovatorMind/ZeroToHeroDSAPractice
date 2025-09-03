#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    if (left > right) return -1; // not found
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) return mid;
    if (arr[mid] > x) return binarySearch(arr, left, mid - 1, x);
    return binarySearch(arr, mid + 1, right, x);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5, target = 7;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) cout << "Found at index " << result;
    else cout << "Not found";
}
