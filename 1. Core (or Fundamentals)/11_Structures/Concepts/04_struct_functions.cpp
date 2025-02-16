// Explains how to pass structures to functions

#include <iostream>
using namespace std;

// Defining a structure
struct Rectangle {
    int length, width;
};

// Function to display structure values
void display(Rectangle r) {
    cout << "Length: " << r.length << ", Width: " << r.width << endl;
}

// Function to calculate area of a rectangle
int calculateArea(Rectangle r) {
    return r.length * r.width;
}

int main() {
    Rectangle rect = {10, 5}; // Initializing structure

    // Passing structure to function
    display(rect);
    cout << "Area: " << calculateArea(rect) << endl;

    return 0;
}
