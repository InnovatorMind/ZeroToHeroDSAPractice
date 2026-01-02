// 3Sum  

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        // for(int num: nums) cout<<num;

        for(int i=0; i<nums.size(); i++) {
         if(i>0 && nums[i] == nums[i-1]) continue;

         int left = i+1;
         int right = nums.size()-1;
         while(left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if(sum<0) {
                left++;
            } else if(sum>0) {
                right--;
            } else {
                result.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;

                while(left < right && nums[left] == nums[left-1]) left++; 
                while(left < right && nums[right] == nums[right+1]) right--; 
            }
         }
        }

        return result;
    }
};

int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    Solution s;
    vector<vector<int>> numArr = s.threeSum(nums);
    for (int i = 0; i < numArr.size(); i++) {
    for (int j = 0; j < numArr[i].size(); j++) {
        cout << numArr[i][j] << " ";
        }
        cout << " | ";
    }

    return 0;
}