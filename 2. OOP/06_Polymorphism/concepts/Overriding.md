## What is Overriding?

**Overriding** allows a derived class to provide a specific implementation of a method already defined in its base class. This is essential for runtime polymorphism.

## How to Override a Method

- The method in the derived class must have the same name, signature, and return type as in the base class.
- In C++, you can denote overriding functions with the `override` keyword (available since C++11) to help catch errors.

## Example without Virtual Functions

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    // This is overriding, but without virtual, it won't support polymorphism via base class pointers.
    void makeSound() {
        cout << "Bark!" << endl;
    }
};

int main() {
    Dog d;
    d.makeSound(); // Output: Bark!
    return 0;
}
```

## Note on Overriding with Virtual Functions

While this file focuses on the basic idea of overriding, proper runtime polymorphism is achieved using virtual functions (covered in the next file).

---

**Remember:**  
Method overriding lets derived classes customize base class behavior.
```
