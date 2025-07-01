// ## 🧠 Problem: **Count Unique Elements**
// You're given an array of integers. Your task is to find how many unique elements are in the array using a std::set.

// 🔹 Input:
// arr[] = {1, 2, 2, 3, 4, 1, 5}
// 🔹 Output:
// Number of unique elements: 5


#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    set<int> uniqueElements;

     // Insert each element into the set
    for (int i = 0; i < n; ++i) {
        uniqueElements.insert(arr[i]);
    }

    cout << "Number of unique elements: " << uniqueElements.size() << endl;

    return 0;
}

