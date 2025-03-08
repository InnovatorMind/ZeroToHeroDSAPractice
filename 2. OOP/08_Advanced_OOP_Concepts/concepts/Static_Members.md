## What Are Static Members?

Static members (variables and functions) belong to the class rather than any instance of the class. They are shared among all objects of that class and exist even if no objects are created.

## Example: Using Static Variables

```cpp
#include <iostream>
using namespace std;

class Counter {
public:
    static int count; // Declaration of static member

    Counter() {
        count++;
    }
};

// Definition of static member outside the class
int Counter::count = 0;

int main() {
    Counter c1;
    Counter c2;
    Counter c3;
    
    cout << "Total count: " << Counter::count << endl; // Output: Total count: 3
    return 0;
}
```

## Why Use Static Members?
- **Shared Data:** Useful for data or functions that should be common to all instances.
- **Utility Functions:** Static functions can be called without creating an object.

## Key Points:
- Static members must be defined outside the class.
- They can be accessed using the scope resolution operator (`::`).
```
