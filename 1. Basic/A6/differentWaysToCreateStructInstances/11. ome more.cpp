// This is valid C++ syntax and is commonly used to declare a struct and an instance of that struct in a single statement.


#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
} p1; // p1 is an instance of Point

int main() {
    // Initializing the members of p1
    p1.x = 10;
    p1.y = 20;

    // Output the values of p1's members
    cout << "p1 (Default Initialization): (" << p1.x << ", " << p1.y << ")" << endl;

    return 0;
}
