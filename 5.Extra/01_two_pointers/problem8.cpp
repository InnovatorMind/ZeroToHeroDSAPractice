// Container With Most Water Given heights of vertical lines, 
// find two that form the container with max water. 
// ➤ Example: height = [1, 8, 6, 2, 5, 4, 8, 3, 7] → Output: max area = 49

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Time Complexity: O(n) | Space Complexity: O(1)
int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int max_area = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int w = right - left;
        max_area = max(max_area, h * w);

        if (height[left] < height[right])
            ++left;
        else
            --right;
    }
    return max_area;
}


int main() {
    vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<< maxArea(nums);
 return 0;
}