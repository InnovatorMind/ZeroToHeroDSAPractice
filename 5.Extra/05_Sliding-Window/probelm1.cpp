#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarrayOfSizeK(vector<int>& arr, int k) {
    int windowSum = 0;
    int maxSum = 0;
    int start = 0;

    for (int end = 0; end < arr.size(); end++) {
        // Add next element
        windowSum += arr[end];

        // When we reach window size 'k'
        if (end >= k - 1) {
            maxSum = max(maxSum, windowSum);
            // Slide the window forward: remove the element going out
            windowSum -= arr[start];
            start++;
        }
    }
    return maxSum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Maximum sum of subarray of size " << k << " = "
         << maxSumSubarrayOfSizeK(arr, k) << endl;
    return 0;
}
