// 7. Copy Initialization (copy_initialization.cpp)

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p2 = {30, 40};
    Point p7 = p2; // Copy initialization from p2 to p7

    cout << "p7 (Copy Initialization): (" << p7.x << ", " << p7.y << ")" << endl;

    return 0;
}
