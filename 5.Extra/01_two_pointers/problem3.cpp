// 🔁 3. Reverse an Array In-Place
// Write a program to reverse an array without using any extra space — just two pointers.
// Input: nums = {1, 2, 3, 4, 5}  
// Output: {5, 4, 3, 2, 1}

#include<iostream>
#include<vector>
using namespace std;

// O(n) time complexity | space complexit O(1)
vector<int> reverseArray(vector<int>& nums) {
    int left = 0, right = nums.size()-1;
    while (left<right)
    {
        int temp = nums[right];
        nums[right] = nums[left];
        nums[left] = temp;
        left++;
        right--;
    }
    return nums;
};

// O(n) time complexity | space complexit O(1)
vector<int> reverseCopy(vector<int>& nums) {
    vector<int> reversed(nums.rbegin(), nums.rend());
    return reversed;
}


int main()
{
    vector<int> nums = {1, 2, 3, 4, 5} ;
    reverseArray(nums);
    cout <<"reversed num: ";
    for(int item : nums) {
        cout <<item << " ";
    }
    cout <<endl;

 return 0;
}