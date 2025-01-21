// 2. Aggregate Initialization (aggregate_initialization.cpp)

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p2 = {30, 40}; // Aggregate initialization

    cout << "p2 (Aggregate Initialization): (" << p2.x << ", " << p2.y << ")" << endl;

    return 0;
}

