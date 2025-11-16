// # Find the Longest Subarray With Sum = K**

// Given:
// ```cpp
// vector<int> arr = {10, 5, 2, 7, 1, 9};
// int k = 15;
// ```
// ### Find:
// * Length of the **longest subarray** whose elements add up to `k`.
// ### Expected Output:
// ```
// Longest subarray length: 4
// ```

// Because:
// `5 + 2 + 7 + 1 = 15` (length = 4)
// ---

// ### Requirements:
// * Use **unordered_map** to store prefix sums
// * Solve in **O(n)**
// * No sliding window (because numbers can be anything)

// ---

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int longestSubarray(vector<int> nums, int k)
{
    
}

int main()
{
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int result = longestSubarray(arr, k);

    return 0;
}