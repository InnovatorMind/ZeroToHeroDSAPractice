// 9. Multiple Instances in One Statement (multiple_instances.cpp)

#include <iostream>
using namespace std;

struct Point2 {
    int x, y;
};

int main() {
    Point2 p9 = {25, 30}, p10 = {5, 10}; // Multiple instances in one statement

    cout << "p9 (Multiple Instances): (" << p9.x << ", " << p9.y << ")" << endl;
    cout << "p10 (Multiple Instances): (" << p10.x << ", " << p10.y << ")" << endl;

    return 0;
}
