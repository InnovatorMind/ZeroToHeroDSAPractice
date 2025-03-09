# Factory Pattern

## What is the Factory Pattern?

The Factory Pattern defines an interface for creating objects but allows subclasses to alter the type of objects that will be created. It helps in managing and maintaining code related to object creation.

## Use Cases:
- Creating objects without exposing the instantiation logic to the client.
- Managing and centralizing object creation in one place.

## Example (in C++):

```cpp
#include <iostream>
#include <memory>
using namespace std;

class Product {
public:
    virtual void info() = 0;
    virtual ~Product() {}
};

class ConcreteProductA : public Product {
public:
    void info() override {
        cout << "ConcreteProductA created" << endl;
    }
};

class ConcreteProductB : public Product {
public:
    void info() override {
        cout << "ConcreteProductB created" << endl;
    }
};

class Factory {
public:
    static unique_ptr<Product> createProduct(const string &type) {
        if (type == "A")
            return make_unique<ConcreteProductA>();
        else if (type == "B")
            return make_unique<ConcreteProductB>();
        else
            return nullptr;
    }
};

int main() {
    auto productA = Factory::createProduct("A");
    auto productB = Factory::createProduct("B");

    if (productA)
        productA->info();
    if (productB)
        productB->info();

    return 0;
}
```

## Key Points:
- The factory method hides the object creation logic.
- It promotes loose coupling between client code and concrete classes.
```
