// Float Return Type:

// Write a function calculateAverage that takes an array of integers and i
// ts size as parameters and returns the average of the numbers as a float.


#include <iostream>
using namespace std;

// Function to calculate the area of a circle
float calculateArea(float radius) {
    const float PI = 3.14159f; // Define the value of pi
    return PI * radius * radius; // Use the formula for area of a circle
}

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call the calculateArea function and store the result
    float area = calculateArea(radius);

    // Display the result
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}
