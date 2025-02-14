# Pointers in C++

## 📌 What are Pointers in C++?
A pointer is a variable that stores the memory address of another variable. Pointers provide direct memory access, allowing efficient manipulation of data and dynamic memory allocation.

## 🔥 What You'll Learn in This Directory:
This directory contains examples and explanations of:
- Access Variable Address
- Access Array Address
- Access Function Address
- Access Struct Address
- Pointer Basic
- Ways To Access Variable and Address
- Pointer arithmetic

## 📝 Basic Syntax:

### 🔹 Declaring and Initializing Pointers
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;  // Pointer stores the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr holds address: " << ptr << endl;
    cout << "Value at pointer address: " << *ptr << endl;  // Dereferencing

    return 0;
}
