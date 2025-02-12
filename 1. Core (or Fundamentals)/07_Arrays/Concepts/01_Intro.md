# Arrays in C++

## 📌 What are Arrays?
An **array** is a collection of variables of the same type, stored in contiguous memory locations. Instead of creating multiple individual variables, we can store and access values using an array.

## 🔥 What You'll Learn:
- What arrays are and why we use them
- Declaring and initializing arrays
- Accessing and modifying elements
- Using loops with arrays
- Basic operations like sum and finding the largest element
- Introduction to multi-dimensional arrays

---

## 📝 Basic Syntax:

### 🔹 Declaring and Initializing an Array
```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Initializing an array

    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;

    return 0;
}
