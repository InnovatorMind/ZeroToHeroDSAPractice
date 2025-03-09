# Singleton Pattern

## What is the Singleton Pattern?

The Singleton Pattern ensures that a class has only one instance and provides a global point of access to it.

## Use Cases:
- Controlling access to shared resources (e.g., database connections, configuration objects).

## Example (in C++):

```cpp
#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;
    // Private constructor to prevent direct instantiation
    Singleton() {}

public:
    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Singleton* getInstance() {
        if (!instance)
            instance = new Singleton();
        return instance;
    }

    void showMessage() {
        cout << "Singleton instance accessed!" << endl;
    }
};

// Initialize the static member
Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s = Singleton::getInstance();
    s->showMessage();
    return 0;
}
```

## Key Points:
- The constructor is private.
- The class contains a static method to access the sole instance.
```
