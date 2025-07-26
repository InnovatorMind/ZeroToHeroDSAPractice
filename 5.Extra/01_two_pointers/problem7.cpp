// 🧊 7. Remove Duplicates from Sorted Array
// Modify the array in-place so that all unique elements appear at the start.

// Input: nums = {1, 1, 2, 2, 3}  
// Output: {1, 2, 3}


#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &nums) {
    int i = 0;
    for (int j = 1; j < nums.size(); ++j) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;  
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3};
    int n = removeDuplicates(nums);
    cout <<"After removing: : ";
    for(int i=0; i<n; i++) 
        cout <<nums[i] << " ";
    cout <<endl;

 return 0;
}