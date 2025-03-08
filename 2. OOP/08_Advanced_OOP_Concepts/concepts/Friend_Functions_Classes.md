## What Are Friend Functions and Friend Classes?

In C++, a **friend function** is a function that is not a member of a class but has access to its private and protected members. Similarly, a **friend class** has such access for all members of the class it befriends.

## Why Use Friend Functions/Classes?

They are useful when you need to grant non-member functions or other classes access to private data, yet you want to preserve encapsulation for most users of your class.

## Example: Friend Function

```cpp
#include <iostream>
using namespace std;

class Box {
private:
    double width;
public:
    Box(double w) : width(w) {}

    // Declare friend function
    friend void printWidth(const Box &b);
};

void printWidth(const Box &b) {
    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box(10.5);
    printWidth(box); // Accesses the private member 'width'
    return 0;
}
```

## Example: Friend Class

```cpp
#include <iostream>
using namespace std;

class Secret {
private:
    int data;
public:
    Secret(int d) : data(d) {}
    
    // Declare another class as friend
    friend class Revealer;
};

class Revealer {
public:
    void revealSecret(const Secret &s) {
        cout << "The secret data is: " << s.data << endl;
    }
};

int main() {
    Secret secret(42);
    Revealer revealer;
    revealer.revealSecret(secret);
    return 0;
}
```

## Key Points:
- Friend functions/classes provide controlled access to class members.
- Use them sparingly, as they break the usual encapsulation boundaries.
```
