#include <iostream>
using namespace std;

int& getMax(int& a, int& b) {
    return (a > b) ? a : b;  // Returns reference to larger value
}

int main() {
    int x = 10, y = 20;
    getMax(x, y) = 50;  // Modifies original variable
    cout << "Updated values: x=" << x << ", y=" << y << endl;

    return 0;
}
