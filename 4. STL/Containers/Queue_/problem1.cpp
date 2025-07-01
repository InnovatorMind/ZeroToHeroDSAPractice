// 🧠 Problem: Simulate a Line of People (Queue)
// You are given a list of names of people entering a queue. Your task is to:
// Enqueue (push) all the names.
// Then dequeue (pop) them one by one and print their names in the order they were added.

// 🔹 Input:
// names[] = {"Alice", "Bob", "Charlie", "David"}
// 🔹 Output:
// Serving: Alice  
// Serving: Bob  
// Serving: Charlie  
// Serving: David


#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> line;

    // Step 1: Enqueue all names
    string names[] = {"Alice", "Bob", "Charlie", "David"};
    int n = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < n; ++i) {
        line.push(names[i]);
    }
    

    // Step 2: Dequeue and serve
    while (!line.empty()) {
        cout << "Serving: " << line.front() << endl;
        line.pop();
    }

    return 0;
}
