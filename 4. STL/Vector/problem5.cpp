// 5. Initialize a vector with 10 elements, all having value 7.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> numbers(10, 7);

    // Print the vector
    cout << "Vector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
