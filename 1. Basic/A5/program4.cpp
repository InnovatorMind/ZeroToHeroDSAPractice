// How to access address of a Structure 

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p1 = {2, 3};

    cout << "Address of p1: " << &p1 << endl; 
    cout << "Address of p1.x: " << &p1.x << endl; 
    cout << "Address of p1.y: " << &p1.y << endl; 

    return 0;
}

// variable: p1
//    +---------+---------+
//    |         |         |
//    |    2    |    3    |
//    |         |         |
//    +---------+---------+
// address: 0x7fffbf4a4b90
// address: 0x7fffbf4a4b90 (p1.x)
// address: 0x7fffbf4a4b94 (p1.y)
