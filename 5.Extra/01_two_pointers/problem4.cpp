// 🧩 4. Move Zeros to End
// Using two pointers, move all zeros to the end of the array while keeping the order of non-zero elements.
// Input: nums = {0, 1, 0, 3, 12}  
// Output: {1, 3, 12, 0, 0}

#include<iostream>
#include<vector>
using namespace std;

int moveZerosToEnd(vector<int> &nums) {
    int slow = 0;
    // Loop through the array
    for (int fast = 0; fast < nums.size(); ++fast) {
        if (nums[fast] != 0) {
            swap(nums[slow], nums[fast]);
            ++slow;
        }
    } 
    return 0;
}

int main()
{

    vector<int> nums = {0, 1, 0, 3, 12};
    moveZerosToEnd(nums);
    cout <<"MoveZerosToEnd: : ";
    for(int item : nums) 
        cout <<item << " ";
    cout <<endl;
 return 0;
}