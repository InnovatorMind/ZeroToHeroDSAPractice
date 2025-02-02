// Create a struct named Circle with:

// radius (double)
// A member function area() that calculates and returns the area of the circle
//  (use 𝜋 ≈ 3.14159 ).
// A member function circumference() that calculates and returns the circumference of the circle.

#include <iostream>
#include <cmath>

using namespace std;

struct Circle {
    double radius;

    // Member function to calculate the area
    double area() {
        const double pi = 3.14159;
        return pi * radius * radius;
    }

    // Member function to calculate the circumference
    double circumference() {
        const double pi = 3.14159;
        return 2 * pi * radius;
    }
};

int main() {
    // Create an instance of Circle
    Circle circle1 = {5.0}; // Circle with radius 5.0

    // Display the area and circumference
    cout << "Circle with radius: " << circle1.radius << "\n";
    cout << "Area: " << circle1.area() << "\n";
    cout << "Circumference: " << circle1.circumference() << "\n";

    return 0;
}


