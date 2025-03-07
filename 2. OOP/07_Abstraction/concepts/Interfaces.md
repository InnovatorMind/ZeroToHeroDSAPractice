## What is an Interface?

While C++ does not have a distinct `interface` keyword like some other languages, an **interface** can be implemented using an abstract class that contains only pure virtual functions and no data members (or only static constants).

## Example of an Interface:

```cpp
#include <iostream>
using namespace std;

class Printable {
public:
    // Pure virtual function: acts as the interface contract
    virtual void print() const = 0;

    // Virtual destructor for proper cleanup
    virtual ~Printable() {}
};

class Document : public Printable {
private:
    string content;
public:
    Document(const string &text) : content(text) {}

    void print() const override {
        cout << "Document Content: " << content << endl;
    }
};

int main() {
    Document doc("This is an abstract interface example.");
    doc.print();  // Output: Document Content: This is an abstract interface example.
    return 0;
}
```

## Key Points:
- An interface defines a set of functions that a class must implement.
- In C++, interfaces are abstract classes with only pure virtual functions.
```
