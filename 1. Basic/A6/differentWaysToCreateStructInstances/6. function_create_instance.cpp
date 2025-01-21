// 6. Function to Create Instance (function_create_instance.cpp)

#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

Point createPoint(int a, int b) {
    return {a, b}; // Return initialized Point
}

int main() {
    Point p6 = createPoint(110, 120); // Using function to create Point

    cout << "p6 (Using Function): (" << p6.x << ", " << p6.y << ")" << endl;

    return 0;
}

