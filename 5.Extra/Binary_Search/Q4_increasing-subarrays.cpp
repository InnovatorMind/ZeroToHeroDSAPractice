#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:

    bool isIncreasing(const vector<int>& nums, int start, int k) {
        for (int i = start + 1; i < start + k; ++i) {
            if (nums[i] <= nums[i - 1])
                return false;
        }
        return true;
    }

    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i <= n - 2 * k; ++i) {
            if (isIncreasing(nums, i, k) && isIncreasing(nums, i + k, k)) {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    // vector<int> numbers = {1,2,3,4,4,4,4,5,6,7};
    vector<int> numbers = {2,5,7,8,9,2,3,4,3,1};
    int key = 3;

    Solution obj;
    cout << "Ans-> " << ((obj.hasIncreasingSubarrays(numbers, key))?"True":"False") <<endl;
 return 0;
}