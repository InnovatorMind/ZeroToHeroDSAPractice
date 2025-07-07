// 🔸 2. list – Bidirectional iterator
// Q1. Print elements of a list<int> using iterator.

#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};

    for (auto it = l.begin(); it != l.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}

// ⚠️ it + 1 ❌ is not allowed. You must use ++it or --it.