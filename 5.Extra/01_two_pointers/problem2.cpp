// 💨 2. Check If Array Has Duplicates
// Use two pointers to check if any adjacent elements in a sorted array are duplicates.
// Input: nums = {1, 2, 3, 3, 5}
// Output: true

#include <iostream>
#include <vector>
#include <unordered_set>
// #include <algorithm>

using namespace std;

bool hasDuplicates1(vector<int> &nums)
{
    int i = 0, j = 1;
    while (j < nums.size())
        if (nums[i] == nums[j])
            return true;
    i++;
    j++;

    return false;
};

// using unordered_set
bool hasDuplicates2(vector<int> &nums) {
    unordered_set<int> seen;
    for (int num : nums)
    {
        if (seen.count(num))
            return true;
        seen.insert(num);
    }
    return false;
}

// What if array is not sorted?

int main()
{
    vector<int> nums = {5, 1, 2, 3, 5};

    // cout << "hasDuplicates: " << (hasDuplicates1(nums) ? "Yes" : "No"); // O(n)
    // if the array is not sorted
    // sort(nums.begin(), nums.end()); // O(n log n)

    // || ==================================================== ||
    // using unordered_set |Time: O(n) - Space: O(n)
    cout << "hasDuplicates: " << (hasDuplicates2(nums) ? "Yes" : "No"); // O(n)

    return 0;
}