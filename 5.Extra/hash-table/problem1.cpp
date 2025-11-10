// 1,. 2 sum

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> umap;

    for (int i = 0; i < nums.size(); i++)
    {
        int key = target - nums[i];
        if (umap.count(key))
        {
            return {umap[key], i};
        }
        umap[nums[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }

    return 0;
}
