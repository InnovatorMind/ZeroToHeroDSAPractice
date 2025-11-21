// Leetcode 525. Contiguous Array

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMaxLength(vector<int> &nums)
{
    unordered_map<int, int> mp;
    mp[0] = -1;

    int sum = 0;
    int maxLen = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += (nums[i] == 0 ? -1 : 1);

        // for(auto val: mp) {
        //     cout << val.first << " : " << val.second << ", ";
        // }
        // cout << endl;

        if (mp.count(sum))
            maxLen = max(maxLen, i - mp[sum]);
        else
            mp[sum] = i;
    }

    return maxLen;
}

int main()
{
    vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1};
    int result = findMaxLength(arr);
    cout << "Max length of contiguous array: " << result << endl;
    return 0;
}