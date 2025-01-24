// Define a struct called Rectangle with members width (int) and height (int). 
// Create an instance of the Rectangle struct and calculate its area.
//  Print the area in the main function.

#include <iostream>

// Use the standard namespace
using namespace std;

// Define the struct
struct Rectangle {
    int width;
    int height;
};

int main() {
    // Create an instance of the Rectangle struct
    Rectangle rectangle1;
    rectangle1.width = 10;
    rectangle1.height = 5;

    // Calculate the area of the Rectangle
    int area = rectangle1.width * rectangle1.height;

    // Print the area
    cout << "Area: " << area << endl;

    return 0;
}

