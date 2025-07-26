// 👶 1. Find Pair with Target Sum in Sorted Array
// Write a function that finds any two numbers in a sorted array that add up to a given target.
// Input: nums = {1, 3, 4, 5, 7, 10}, target = 9
// Output: Pair found: (4, 5)

#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
// #include <algorithm>

using namespace std;

pair<int, int> findPair(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    while (left < right)
    {
        int sum = nums[left] + nums[right];
        if (sum == target)
            return make_pair(left, right);
        else if (sum < target)
            left++;
        else
            right--;
    }
    return make_pair(-1, -1);
};

// using unorderd set
pair<int, int> findPairUnsorted(vector<int> &nums, int target)
{
    unordered_set<int> seen;
    for (int num : nums)
    {
        int complement = target - num;
        if (seen.count(complement))
            return {complement, num};
        seen.insert(num);
    }
    return {-1, -1}; // If no pair found
};

// using unorederd pair 
pair<int, int> findPairIndexesUnsorted(vector<int> &nums, int target)
{
    unordered_map<int, int> seen; // value → index

    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];
        if (seen.count(complement))
        {
            return {seen[complement], i}; // indexes
        }
        seen[nums[i]] = i;
    }

    return {-1, -1}; // No pair found
}

int main()
{
    // vector<int> nums = {1, 3, 4, 5, 7, 10};
    // int target = 9;

    // If array is Sorted | Time Complexity: O(n) Space Complexity: O(1)
    // pair<int, int> indexes = findPair(nums, target);
    // cout << "(" << indexes.first << ", " << indexes.second << ")";

    // 1st approch If array is not Sorted | We can use sort algo
    // sort(nums.begin(), nums.end()); // O(n log n)
    // further O(n)
    // Total O(n log n) + O(n) = O(n log n)
    // Space Complexity: If sorting is in-place: O(1) auxiliary space
    // Otherwise: O(n) if using an extra array

    // || ================================================================||
    // || ================================================================||
    // 2nd Approch using Hash Set
    // Time Complexity: O(n) → Each number is checked once.
    // Space Complexity:O(n) → In the worst case, you store every number in the set.
    vector<int> nums = {10, 1, 4, 7, 5, 3}; // Unsorted
    int target = 9;

    // using unordered_set
    // auto result = findPairUnsorted(nums, target);
    // cout << "(" << result.first << ", " << result.second << ")";

    // using unordered_map Time Complexity: O(n) | Space Complexity: O(n)
    auto idx = findPairIndexesUnsorted(nums, target);
    cout << "Indexes: (" << idx.first << ", " << idx.second << ")";

    return 0;
}