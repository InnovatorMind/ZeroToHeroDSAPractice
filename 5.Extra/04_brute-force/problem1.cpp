// Given an array of integers and a target value, find two numbers whose sum equals the target.
// Example:

// arr = [2, 7, 11, 15]
// target = 9
// Answer → 2 + 7 = 9


#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4, target = 9;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
                return 0;
            }
        }
    }

    cout << "No pair found";
}
