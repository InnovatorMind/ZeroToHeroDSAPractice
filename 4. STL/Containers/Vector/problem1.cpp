// Create a vector of integers and insert 5 elements (any values).


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;  // Declaration

    // Insert
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Print the vector
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}

