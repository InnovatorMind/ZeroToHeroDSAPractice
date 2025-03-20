// struct Return Type:


#include <iostream>
using namespace std;

// Define a struct to hold dimensions of a rectangle
struct Rectangle {
    float length;
    float width;
    float area;
};

// Function to calculate rectangle dimensions and return a struct
Rectangle calculateDimensions(float length, float width) {
    Rectangle rect;
    rect.length = length;
    rect.width = width;
    rect.area = length * width; // Calculate the area
    return rect; // Return the struct
}

int main() {
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Call the calculateDimensions function and store the result
    Rectangle rect = calculateDimensions(length, width);

    // Display the result
    cout << "The rectangle has:" << endl;
    cout << "Length: " << rect.length << endl;
    cout << "Width: " << rect.width << endl;
    cout << "Area: " << rect.area << endl;

    return 0;
}
