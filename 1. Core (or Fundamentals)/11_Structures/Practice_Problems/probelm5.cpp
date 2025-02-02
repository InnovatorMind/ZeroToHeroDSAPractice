// Define a struct called Rectangle with members width (int) and height (int).
//  Define a constructor to initialize these members. Create an instance of the Rectangle struct using the constructor with values width = 7 and height = 3. 
// Print the values of width and height in the main function.


#include <iostream>

// Use the standard namespace
using namespace std;

// Define the struct
struct Rectangle {
    int width;
    int height;

    // Constructor to initialize the members
    Rectangle(int w, int h) : width(w), height(h) {}
};

int main() {
    // Create an instance of the Rectangle struct using the constructor
    Rectangle rectangle1(7, 3);

    // Print the values of width and height
    cout << "Width: " << rectangle1.width << endl;
    cout << "Height: " << rectangle1.height << endl;

    return 0;
}
