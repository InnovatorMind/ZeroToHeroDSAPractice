// # Find the First Element Repeating in an Array**

// Given:
// ```cpp
// vector<int> arr = {5, 3, 4, 3, 5, 6};
// ```
// ### Output should be:
// ```
// First repeating element: 3
// ```
// **Why 3?**
// Because:
// * 5 repeats later
// * 3 repeats earlier
// * So 3 is the *first* repeating element (based on original order)
// ---

// ### Requirements:
// * Use **unordered_map**
// * No sorting
// * Time complexity: **O(n)**

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int firstRepeatingEle(vector<int> nums)
{
    unordered_map<int, int> umap;

    for (int item : nums)
    {
        if (umap[item] > 0)
            return item;
        umap[item]++;
    }
    return -1;
}

int main()
{
    vector<int> arr = {5, 3, 4, 3, 5, 6};

    int result = firstRepeatingEle(arr);
    if (result == -1)
    {
        cout << "Array is empty";
    }
    else
    {
        cout << "First Element Repeating: " << result;
    }

    return 0;
}