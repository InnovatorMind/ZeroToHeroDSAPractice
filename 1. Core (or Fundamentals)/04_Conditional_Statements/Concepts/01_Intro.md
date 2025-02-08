# Conditional Statements in C++

## 📌 What are Conditional Statements in C++?
Conditional statements allow a program to make decisions based on certain conditions. These statements control the flow of execution depending on whether a condition is `true` or `false`.

## 🔥 What You'll Learn in This Directory:
This directory contains examples and explanations of:
- `if` statement
- `if-else` statement
- `if-else if-else` ladder
- `switch-case` statement
- Ternary (conditional) operator `? :`

## 📝 Basic Syntax:

### 🔹 if-else Statement
```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive number" << endl;
    } else {
        cout << "Non-positive number" << endl;
    }

    return 0;
}
