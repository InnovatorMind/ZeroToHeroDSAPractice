// 🧮 6. Count Pairs with Difference Equal to K
// Count how many unique pairs have a difference of exactly K in a sorted array.

// Input: nums = {1, 3, 5, 7}, k = 2  
// Output: 3 pairs → (1,3), (3,5), (5,7)


#include<iostream>
#include<vector>
using namespace std;

bool uniquePair(vector<int> nums) {
    int left = 0, right = nums.size()-1;

    return true;
}

int main()
{
    vector<int> nums = {1, 2, 3, 2, 1};
    // vector<int> nums = {1, 2, 3, 5, 1};
    cout << "isPalindrome: " << (uniquePair(nums) ? "Yes" : "No"); // O(n)

 return 0;
}