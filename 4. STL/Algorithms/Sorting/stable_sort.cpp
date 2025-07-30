// not required if you are just learnin DSA 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int score;
};

// Helper to print the vector
void print(const vector<Student>& v) {
    for (auto& s : v)
        cout << s.name << " " << s.score << endl;
    cout << "---\n";
}

int main() {
    vector<Student> students = {
        {"Alice", 90},
        {"Bob", 90},
        {"Charlie", 85},
        {"David", 90}
    };

    // Sorting by score using std::sort (unstable)
    sort(students.begin(), students.end(),
         [](const Student& a, const Student& b) {
             return a.score > b.score;
         });

    cout << "Unstable sort:\n";
    print(students);

    // Resetting original order
    students = {
        {"Alice", 90},
        {"Bob", 90},
        {"Charlie", 85},
        {"David", 90}
    };

    // Sorting by score using std::stable_sort
    stable_sort(students.begin(), students.end(),
                [](const Student& a, const Student& b) {
                    return a.score > b.score;
                });

    cout << "Stable sort:\n";
    print(students);

    return 0;
}

// Now you sort by score:
// Stable Sort will keep "Alice" before "Bob" since they had that order originally.
// Unstable Sort might flip their order arbitrarily.