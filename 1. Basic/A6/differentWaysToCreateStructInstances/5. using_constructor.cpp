// 5. Using Constructor (using_constructor.cpp)

#include <iostream>
using namespace std;

struct PointWithConstructor {
    int x, y;
    PointWithConstructor(int a, int b) : x(a), y(b) {}
};

int main() {
    PointWithConstructor p5(90, 100); // Using constructor

    cout << "p5 (Using Constructor): (" << p5.x << ", " << p5.y << ")" << endl;

    return 0;
}


