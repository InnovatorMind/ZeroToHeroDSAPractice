#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Printing the elements
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
