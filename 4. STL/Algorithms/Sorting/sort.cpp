#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

    vector<int> nums = {4, 1, 7, 3, 9};
    
    // Ascending sort
    // sort(nums.begin(), nums.end());

    // Descending order
    sort(nums.begin(), nums.end(), greater<int>());

    // Print result
    for (int num : nums)
        cout << num << " ";
}

// Use sort when speed matters and stability doesn’t.
 