## What are Virtual Functions?

A **virtual function** is a member function in a base class that you expect to override in derived classes. Declaring a function as virtual ensures that the correct function is called based on the object's runtime type rather than the pointer or reference type.

## How to Use Virtual Functions

- Declare the base class function as `virtual`.
- Override the function in derived classes.
- Use base class pointers or references to achieve runtime polymorphism.

## Example

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function for runtime polymorphism
    virtual void makeSound() {
        cout << "Some generic animal sound" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Cat();
    animals[1] = new Dog();
    
    // Runtime polymorphism: the correct makeSound() is called for each object.
    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound();
    }
    
    // Clean up
    delete animals[0];
    delete animals[1];

    return 0;
}
```

**Key Points:**

- Virtual functions enable derived classes to override methods so that the method call is resolved at runtime.
- Using the `override` keyword in derived classes helps ensure you are correctly overriding the base class method.
```
