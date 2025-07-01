


#include <iostream>
#include <deque>
using namespace std;

// Function to print max of each window of size k
void slidingWindowMax(int arr[], int n, int k) {
    deque<int> dq;

    for (int i = 0; i < n; i++) {
        // Remove indices that are out of the current window
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove all elements smaller than current from the back 
        while (!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();

        dq.push_back(i); // Add current index

        // Print the front element when we have the first full window
        if (i >= k - 1)
            cout << arr[dq.front()] << " ";
    }
    cout << endl;
}

int main() {
    // int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int arr[] = {21, 13, 8, 6, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Sliding window maximums are: ";
    slidingWindowMax(arr, n, k);

    return 0;
}
