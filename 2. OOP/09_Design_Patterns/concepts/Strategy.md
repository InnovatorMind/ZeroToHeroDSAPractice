# Strategy Pattern

## What is the Strategy Pattern?

The Strategy Pattern defines a family of algorithms, encapsulates each one, and makes them interchangeable. This lets the algorithm vary independently from clients that use it.

## Use Cases:
- Switching between different algorithms or behaviors at runtime.
- Reducing conditional statements in client code.

## Example (in C++):

```cpp
#include <iostream>
using namespace std;

class Strategy {
public:
    virtual int execute(int a, int b) = 0;
    virtual ~Strategy() {}
};

class AddStrategy : public Strategy {
public:
    int execute(int a, int b) override {
        return a + b;
    }
};

class MultiplyStrategy : public Strategy {
public:
    int execute(int a, int b) override {
        return a * b;
    }
};

class Context {
private:
    Strategy* strategy;
public:
    void setStrategy(Strategy* strat) {
        strategy = strat;
    }

    void performOperation(int a, int b) {
        if (strategy) {
            cout << "Result: " << strategy->execute(a, b) << endl;
        }
    }
};

int main() {
    Context context;
    AddStrategy addStrat;
    MultiplyStrategy multStrat;

    context.setStrategy(&addStrat);
    context.performOperation(5, 3); // Output: Result: 8

    context.setStrategy(&multStrat);
    context.performOperation(5, 3); // Output: Result: 15

    return 0;
}
```

## Key Points:
- The Strategy Pattern helps encapsulate algorithms as interchangeable parts.
- It enhances flexibility and avoids cluttering client code with conditionals.
```
