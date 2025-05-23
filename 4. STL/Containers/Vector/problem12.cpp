// 12. Resize the vector to 5 elements using `resize()`.


#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};  // Initially 3 elements

    // Resizing the vector to 5 elements
    numbers.resize(5);

    // Printing the updated vector
    cout << "Vector elements after resize: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}


// Vector elements after resize: 10 20 30 0 0 