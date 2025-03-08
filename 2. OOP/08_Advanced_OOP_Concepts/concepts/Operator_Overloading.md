## What is Operator Overloading?

Operator overloading allows you to define or reinterpret the way an operator (like `+`, `-`, `*`, etc.) works with user-defined types (classes). This technique helps make your classes easier to use by allowing objects to interact with conventional operators.

## Example: Overloading the + Operator for Complex Numbers

```cpp
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload + operator to add two Complex numbers
    Complex operator+(const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.0, 2.0), c2(1.0, 7.0);
    Complex c3 = c1 + c2; // Calls overloaded operator+
    c3.display(); // Output: "4 + 9i"
    return 0;
}
```

## Key Points:
- Overloadable operators include arithmetic, relational, and even stream insertion/extraction.
- The overloaded operator must be implemented as a member function or a friend function.
```
