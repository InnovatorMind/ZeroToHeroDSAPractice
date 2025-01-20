// Define a struct called Point with members x (int) and y (int).
// Create an instance of the Point struct and initialize it with some values.
// Access and print the values of x and y directly in the main function.
#include <iostream>

// Use the standard namespace
using namespace std;

// Define the struct
struct Point {
    int x;
    int y;
};

int main() {
    // Create an instance of the Point struct
    Point point1;
    point1.x = 10;
    point1.y = 20;

    // Access and print the values of x and y
    cout << "X: " << point1.x << endl;
    cout << "Y: " << point1.y << endl;

    return 0;
}

