// Exercise2_Solution.cpp

#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    // Setters with validation
    void setWidth(int w) {
        if (w > 0) {
            width = w;
        } else {
            cout << "Invalid value for width." << endl;
        }
    }

    void setHeight(int h) {
        if (h > 0) {
            height = h;
        } else {
            cout << "Invalid value for height." << endl;
        }
    }

    // Getters
    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

    // Method to calculate area
    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect;

    // Attempt to set negative values
    rect.setWidth(-5);    // Invalid value
    rect.setHeight(10);   // Valid value

    // Set valid width
    rect.setWidth(5);

    // Calculating and displaying area
    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}


// ## **Notes:**

// - **Encapsulation Enhanced:** By making attributes private and providing getters and setters, we protect the internal state of the objects.
// - **Validation Logic:** Setters include checks to ensure only valid data is assigned.
// - **Error Handling:** Appropriate error messages guide the user when invalid data is provided.

// ---

// ## **Additional Exercises (Optional):**

// - **Exercise 3:** Create a `Temperature` class that only allows temperatures above absolute zero (-273.15 degrees Celsius).
// - **Exercise 4:** Implement a `PasswordManager` class where the password attribute is private, and the setter validates password strength.

// ---

// ## **Next Steps:**

// - Reflect on how encapsulation contributes to robust and maintainable code.
// - Proceed to **"04_Constructors_Destructors/"** to learn about object lifecycle management.
// - Experiment by modifying the code and adding new features.

// ---

// ## **Final Thoughts:**

// Encapsulation is a powerful principle that safeguards your data and enforces integrity within your programs. By mastering encapsulation, you're laying a strong foundation for creating secure and reliable software.

// ---
