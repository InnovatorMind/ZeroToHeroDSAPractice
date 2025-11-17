// Leetcode 560. Subarray Sum Equals K

// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:
// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> umap;
    umap[0] = 1;

    int starSum = 0;
    int result = 0;

    for(int ele: nums) {
        starSum += ele;

        int remain = starSum - k;
        if(umap.find(remain) != umap.end()) {
            result += umap[remain];
        }
        umap[starSum]++;
    }

    return result;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    int k = 3;

    int result = subarraySum(arr, k);
    cout << "Result: " << result <<endl;

    return 0;
}