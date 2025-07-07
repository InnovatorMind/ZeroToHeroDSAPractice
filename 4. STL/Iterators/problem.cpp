// 🔸 1. vector – Random Access iterator
// Q1. Print elements of a vector<int> using iterator.

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}

// We can use it + 1, it - 1, etc. because it's random access.