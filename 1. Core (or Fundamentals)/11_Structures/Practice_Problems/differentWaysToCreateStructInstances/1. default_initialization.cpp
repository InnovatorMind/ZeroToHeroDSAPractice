// 1. Default Initialization (default_initialization.cpp)

#include <iostream>
using namespace std;



int main() {
    struct Point {
    int x;
    int y;
};
    Point p1; // Default initialization
    p1.x = 10;
    p1.y = 20;

    cout << "p1 (Default Initialization): (" << p1.x << ", " << p1.y << ")" << endl;

    return 0;
}
