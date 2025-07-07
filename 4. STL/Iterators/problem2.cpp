// 🔸 3. map – Bidirectional Iterator (Pair of key-value)
// Q1. Print elements of a map<string, int> using iterator.

#include <map>
#include <iostream>
using namespace std;

int main() {
    map<string, int> m = {{"apple", 3}, {"banana", 5}, {"orange", 2}};

    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}

// Note: it->first is the key, it->second is the value.