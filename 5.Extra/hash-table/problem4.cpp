
// ---

// # **Question 5: Find the Most Frequent Element in an Array**
// (Difficulty: Medium)

// Given an integer array:
// ```cpp
// int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 3, 3};
// ```
// ### **Task:**
// Using **unordered_map<int, int>**, find:
// 1. The element that appears **most frequently**
// 2. Its frequency count
// ---

// ### Output Format:
// ```
// Most frequent element: ?
// Frequency: ?
// ```
// ---

// ### Notes:
// * No sorting allowed
// * Use only hash map + simple loops
// * Do NOT use `map`, only `unordered_map`

// ---



#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


pair<int, int> mostFreqElement(int arr[], int n) {

    unordered_map<int, int> umap;

    for(int i=0; i<n; i++) {
        umap[arr[i]]++;
    }

    pair<int, int> result = {0, 0};
    int mostFreEle = 0;
    for(auto pairs: umap) {
        if(mostFreEle < pairs.second) {
            result.first = pairs.first;
            result.second = pairs.second;
            mostFreEle = pairs.second;
        }
    }

    return result;
}

pair<int, int> mostFreqElement(vector<int> arr) {

    unordered_map<int, int> umap;
    for(int ele : arr) {
        umap[ele]++;
    }

    pair<int, int> result;
    int mostFreEle = 0;
    for(auto pairs: umap) {
        if(mostFreEle < pairs.second) {
            result.first = pairs.first;
            result.second = pairs.second;
            mostFreEle = pairs.second;
        }
    }

    return result;
}

int main()
{

    // int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 3, 3};
    // int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> arr = {1, 3, 2,  1, 4, 1, 3, 2, 3, 3};

    auto result = mostFreqElement(arr);
    cout << "Most frequent element: " << result.first 
         << " Frequency: " << result.second;
       
    return 0;
}