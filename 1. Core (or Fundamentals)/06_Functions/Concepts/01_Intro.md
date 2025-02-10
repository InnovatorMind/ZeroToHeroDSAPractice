# Functions in C++

## 📌 What are Functions in C++?
Functions are reusable blocks of code that perform a specific task. They help in reducing redundancy, improving readability, and organizing the program efficiently.

## 🔥 What You'll Learn in This Directory:
This directory contains examples and explanations of:
- Function declaration and definition
- Return types (`void`, `int`, `float`, etc.)
- Function parameters (pass by value, pass by reference)
- Function overloading
- Recursion (functions calling themselves)

## 📝 Basic Syntax:

### 🔹 Function Declaration and Definition
```cpp
#include <iostream>
using namespace std;

// Function declaration
void greet() {
    cout << "Hello, welcome to C++ functions!" << endl;
}

int main() {
    greet();  // Function call
    return 0;
}
