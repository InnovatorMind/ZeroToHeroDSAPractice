// 8. Reference Initialization (reference_initialization.cpp)


#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p1 = {10, 20};
    Point& p8 = p1; // Reference to p1
    p8.x = 15; // Modify p1 via reference

    cout << "p8 (Reference Initialization): (" << p8.x << ", " << p8.y << ")" << endl;

    return 0;
}

