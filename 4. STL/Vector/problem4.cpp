// Take `n` inputs from the user and store them in a vector.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    vector<int> numbers;

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        numbers.push_back(x);  // Store 
    }

    // Display 
    cout << "You entered: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
