# References in C++

## 📌 What are References in C++?
A reference is an alias for an existing variable. Unlike pointers, references must be initialized when declared and cannot be reassigned.

## 🔥 What You'll Learn in This Directory:
This directory contains examples and explanations of:
- Declaring and using references
- Differences between pointers and references
- References in function parameters
- Returning references from functions

## 📝 Basic Syntax:

### 🔹 Declaring and Using References
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int& ref = num;  // Reference to num

    cout << "Value of num: " << num << endl;
    cout << "Value of ref: " << ref << endl;

    ref = 20;  // Changing ref also changes num
    cout << "Updated num: " << num << endl;

    return 0;
}
