# Abstract Classes

## What is an Abstract Class?

An **abstract class** is a class that cannot be instantiated on its own because it contains at least one pure virtual function. It is used as a base class for other classes.

- **Pure Virtual Function:** A function declared with `= 0` (e.g., `virtual void func() = 0;`) that must be overridden in derived classes.
- **Usage:** Enforces a contract for derived classes, ensuring they implement specific behavior.

## Example:

```cpp
#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate an abstract class
    Circle c;
    c.draw();  // Output: Drawing a circle.
    return 0;
}
```

## Key Points:
- Abstract classes define interfaces for derived classes.
- They ensure that derived classes implement the required functions.
```
