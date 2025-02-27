## What is Overloading?

**Overloading** enables you to define multiple functions with the same name but with different parameter lists. There are two common types:

1. **Function Overloading:**  
   - Same function name within the same scope.
   - Different types or number of parameters.
2. **Operator Overloading:**  
   - Redefine how operators (like +, -, etc.) behave for user-defined types.

## Function Overloading Example

```cpp
#include <iostream>
using namespace std;

class MathOperations {
public:
    // Overloaded method for integers
    int multiply(int a, int b) {
        return a * b;
    }
    
    // Overloaded method for doubles
    double multiply(double a, double b) {
        return a * b;
    }
};
 
int main() {
    MathOperations math;
    cout << "Integer multiply: " << math.multiply(3, 4) << endl;
    cout << "Double multiply: " << math.multiply(2.5, 4.0) << endl;
    return 0;
}
```

## Operator Overloading Example

```cpp
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
    // Overload the + operator
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(1, 4);
    Complex c3 = c1 + c2;
    c3.display(); // Output: 3 + 7i
    return 0;
}
```

---

**Key Points:**

- Overloading improves code readability by allowing the same function (or operator) to work with different types.
- Function overload resolution is determined at compile time.
```
