// 🧮 6. Count Pairs with Difference Equal to K
// Count how many unique pairs have a difference of exactly K in a sorted array.

// Input: nums = {1, 3, 5, 7}, k = 2  
// Output: 3 pairs → (1,3), (3,5), (5,7)


#include<iostream>
#include<vector>
using namespace std;

vector<vector <int>> uniquePair(vector<int> nums, int key) {
    vector<vector <int>> result;
    int left = 0, right = 1;
    while(left< right) {
        int diff = nums[right] - nums[left];
        if(diff == key){
            result.push_back({nums[left], nums[right]});
            left++;
            right++;
        } else if(diff < key) {
            right ++;
        } else {
            left++;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 3, 5, 7};
    int key = 2;
    auto paires = uniquePair(nums, key);
    for (const auto& row : paires) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

 return 0;
}
//done got a dopamine hit 
