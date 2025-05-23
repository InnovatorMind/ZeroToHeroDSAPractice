// 9. Insert an element at index 2 using `insert()`.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40};

    numbers.insert(numbers.begin() + 2, 25);

    // Printing the updated vector
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
