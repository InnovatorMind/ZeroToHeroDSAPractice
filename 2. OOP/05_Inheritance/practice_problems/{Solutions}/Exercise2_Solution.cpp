// Exercise2_Solution.cpp

#include <iostream>
#include <iomanip>
using namespace std;

// Base class
class Shape {
public:
    virtual double area() {
        return 0;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() override {
        return width * height;
    }
};

// Derived class - Circle
class Circle : public Shape {
private:
    double radius;
    const double pi = 3.1416;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return pi * radius * radius;
    }
};

int main() {
    Shape* shapes[2];

    // Rectangle object
    shapes[0] = new Rectangle(4.0, 5.0);

    // Circle object
    shapes[1] = new Circle(3.0);

    // Display areas
    for (int i = 0; i < 2; i++) {
        cout << fixed << setprecision(2);
        cout << "Area of shape " << i + 1 << ": " << shapes[i]->area() << endl;
    }

    // Clean up
    delete shapes[0];
    delete shapes[1];

    return 0;
}



// ## **Notes:**

// - **Exercise 1:**

//   - Demonstrated single inheritance with `Employee` inheriting from `Person`.
//   - Showed multilevel inheritance with `Manager` inheriting from `Employee`.
//   - Illustrated hierarchical inheritance with both `Employee` and `Student` inheriting from `Person`.

// - **Exercise 2:**

//   - Used virtual functions to achieve runtime polymorphism.
//   - Overrode the `area()` method in derived classes to provide specific implementations.
//   - Managed memory by deleting dynamically allocated objects.

// ---

// ## **Additional Exercises (Optional):**

// - **Exercise 3:** Implement multiple inheritance by creating a `HybridVehicle` class that inherits from both `Car` and `ElectricVehicle`.
// - **Exercise 4:** Create a class hierarchy for geometric shapes that includes `Triangle`, `Square`, and `Circle`, and demonstrate polymorphism.

// ---

// ## **Final Thoughts:**

// Inheritance is a powerful feature in OOP that promotes code reuse and establishes relationships between classes. By understanding and applying inheritance, you can create more organized and scalable software designs.

// ---

// If you have any questions or need further clarification on any topic, feel free to ask!

// ---