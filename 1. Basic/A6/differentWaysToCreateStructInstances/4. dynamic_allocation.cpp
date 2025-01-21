// 4. Dynamic Allocation (dynamic_allocation.cpp)

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point* p4 = new Point{70, 80}; // Dynamic allocation
    cout << "p4 (Dynamic Allocation): (" << p4->x << ", " << p4->y << ")" << endl;

    delete p4; // Clean up
    return 0;
}
