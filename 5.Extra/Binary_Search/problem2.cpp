// 🧩 Example array
// vector<int> arr = {2, 4, 5, 6, 7, 10, 12, 15};
// int k = 8;

// 🎯 Goal 1 — Find the closest smaller (floor) element
// → the largest number ≤ k
// In this example:
// Closest smaller to 8 = 7

// 🎯 Goal 2 — Find the closest greater (ceiling) element
// → the smallest number ≥ k
// In this example:
// Closest greater to 8 = 10

#include<iostream>
#include<vector>
using namespace std;

int findFloor(vector<int>& arr, int k) {
    int left = 0, right = arr.size() - 1;
    int ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == k)
            return arr[mid];
        else if (arr[mid] < k) {
            ans = arr[mid];
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans;
}

int findCeil(vector<int>& arr, int k) {
    int left = 0, right = arr.size() - 1;
    int ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == k)
            return arr[mid];
        else if (arr[mid] < k) {
            left = mid + 1;
        } else {
            ans = arr[mid];
            right = mid - 1;
        }
    }

    return ans;
}


int main()
{
    vector<int> arr = {2,4,5,6,7,10,12,15};
    int k = 8;

    cout << "findFloor: " << findFloor(arr, k) <<endl;
    cout << "findCeil: " << findCeil(arr, k) <<endl;

 return 0;
}