// 3. Designated Initialization (designated_initialization.cpp)

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p3 = {.x = 50, .y = 60}; // Designated initialization (C++20)

    cout << "p3 (Designated Initialization): (" << p3.x << ", " << p3.y << ")" << endl;

    return 0;
}

