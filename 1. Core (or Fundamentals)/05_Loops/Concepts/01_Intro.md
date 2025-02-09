# Loops in C++

## 📌 What are Loops in C++?
Loops allow executing a block of code multiple times based on a condition. They are useful for tasks that require repetition, such as iterating over arrays or processing data.

## 🔥 What You'll Learn in This Directory:
This directory contains examples and explanations of:
- `for` loop
- `while` loop
- `do-while` loop
- Nested loops
- Loop control statements (`break`, `continue`)

## 📝 Basic Syntax:

### 🔹 for Loop
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration " << i << endl;
    }
    return 0;
}
