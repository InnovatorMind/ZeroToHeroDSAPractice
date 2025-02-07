# Operators in C++

## 📌 What are Operators in C++?
Operators are symbols that perform operations on variables and values. C++ provides various types of operators for mathematical calculations, comparisons, logical operations, and more.

## 🔥 What You'll Learn in This Directory:
This directory contains examples and explanations of:
- Arithmetic Operators (`+`, `-`, `*`, `/`, `%`)
- Relational Operators (`==`, `!=`, `>`, `<`, `>=`, `<=`)
- Logical Operators (`&&`, `||`, `!`)
- Bitwise Operators (`&`, `|`, `^`, `~`, `<<`, `>>`)
- Assignment Operators (`=`, `+=`, `-=`, `*=`, `/=`, `%=`)
- Increment and Decrement Operators (`++`, `--`)

## 📝 Basic Syntax:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    cout << "Sum: " << (a + b) << endl;  // Arithmetic operator
    cout << "Is a greater than b? " << (a > b) << endl;  // Relational operator
    cout << "Logical AND: " << ((a > 0) && (b > 0)) << endl;  // Logical operator
    return 0;
}
