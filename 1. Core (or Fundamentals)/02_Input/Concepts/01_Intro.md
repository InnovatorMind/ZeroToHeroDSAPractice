# Input in C++

## 📌 What is Input in C++?
In C++, input refers to taking user input through the keyboard. The `cin` (character input) object from the `<iostream>` library is used to read data from the user.

## 🔥 What You'll Learn in This Directory:
This directory contains examples and explanations of:
- Taking input using `cin`
- Reading integers, floating-point numbers, and characters
- Taking string input using `cin` and `getline()`
- Handling spaces in input
- Dealing with buffer issues in input

## 📝 Basic Syntax:
```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    return 0;
}
