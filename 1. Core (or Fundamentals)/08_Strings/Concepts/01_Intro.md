# Strings in C++

## 📌 What are Strings?
A **string** is a sequence of characters. C++ provides two main ways to handle strings:
1. **Character Arrays (`char array[]`)** – Used in traditional C-style string handling.
2. **`string` Class (from `<string>` library)** – Modern and easier to use.

## 🔥 What You'll Learn:
- Declaring and initializing strings
- Using `getline()` for input
- String manipulation functions (length, concatenation, comparison, etc.)
- Working with character arrays vs. `string` class
- Converting between numbers and strings


## 📝 Basic Syntax:

### 🔹 Using Character Arrays
```cpp
#include <iostream>
using namespace std;

int main() {
    char name[] = "Hello";  // Character array
    cout << "Name: " << name << endl;
    return 0;
}

