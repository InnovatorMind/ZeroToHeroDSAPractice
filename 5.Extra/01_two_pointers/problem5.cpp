// 🌊 5. Check if Array is a Palindrome
// Use two pointers to check whether the array reads the same forward and backward.

// Input: nums = {1, 2, 3, 2, 1}  
// Output: true

#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(vector<int> nums) {
    int left = 0, right = nums.size()-1;
    while(left<right) {
        if(nums[left]!=nums[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    vector<int> nums = {1, 2, 3, 2, 1} ;
    // vector<int> nums = {1, 2, 3, 5, 1} ;
    cout << "isPalindrome: " << (isPalindrome(nums) ? "Yes" : "No"); // O(n)

 return 0;
}