# Implementing Abstraction

## How to Implement Abstraction in C++?

By using abstract classes and interfaces, you can separate what a system does from how it does it. This makes your code more modular and easier to maintain.

### Example: Abstract Class for a Payment System

```cpp
#include <iostream>
using namespace std;

// Abstract base class representing a generic Payment
class Payment {
public:
    // Pure virtual function representing a payment process
    virtual void processPayment(double amount) = 0;
    
    // Virtual destructor for proper cleanup
    virtual ~Payment() {}
};

// Derived class representing a Credit Card payment
class CreditCardPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing credit card payment of $" << amount << endl;
    }
};

// Derived class representing a PayPal payment
class PayPalPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing PayPal payment of $" << amount << endl;
    }
};

int main() {
    // We can only refer to Payment objects via pointers or references
    Payment* payment1 = new CreditCardPayment();
    Payment* payment2 = new PayPalPayment();
    
    payment1->processPayment(100.50);
    payment2->processPayment(200.75);
    
    delete payment1;
    delete payment2;
    return 0;
}
```

## Benefits of Abstraction:
- **Simplification:** Exposes only the necessary parts of an object.
- **Modularity:** Separate interfaces allow for flexible code implementations.
- **Maintenance:** Changes to the implementation do not affect the users of the interface.
```
