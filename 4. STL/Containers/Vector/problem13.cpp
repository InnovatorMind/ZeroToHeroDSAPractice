// Print all elements using iterators.

#include <iostream>
#include <vector> 
using namespace std;

int main() {

    vector<int> numbers = {1, 2, 3, 4, 5};

    // Creating an iterator
    vector<int>::iterator it;

    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
