// 🧠 Problem: Check for Duplicates in an Array
// You're given an array of integers. Write a program using std::set to check if there are any duplicates in the array.

// 🔹 Input:
// arr[] = {10, 5, 3, 4, 3, 5, 6}
// 🔹 Output:
// Contains duplicates: Yes
// Another input:
// arr[] = {1, 2, 3, 4, 5}


#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {10, 3, 5, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    set<int> seen;
    bool hasDuplicate = false;

    // Insert each element into the set and then compair n and seen.size()
    // for (int i = 0; i < n; ++i) {
    //     seen.insert(arr[i]);
    // }

    // jsut check while inseting thats it 
    for (int i = 0; i < n; ++i) {
    if (seen.count(arr[i])) {
        cout << "Contains duplicates";
        hasDuplicate = true;
        break;
    }
    seen.insert(arr[i]);
    }



    if ((hasDuplicate))
        cout << "Contains duplicates: Yes" << endl;
    else
        cout << "Contains duplicates: No" << endl;

    return 0;
}

