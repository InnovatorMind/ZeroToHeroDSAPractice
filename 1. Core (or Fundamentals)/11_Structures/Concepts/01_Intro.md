# Structures in C++

## 📌 What are Structures in C++?
A structure (`struct`) is a user-defined data type that groups related variables under a single name. Unlike arrays, structures can hold multiple data types.

## 🔥 What You'll Learn in This Directory:
This directory contains examples and explanations of:
- Declaring and using structures
- Accessing structure members
- Passing structures to functions
- Structures with pointers
- Nested structures

## 📝 Basic Syntax:

### 🔹 Defining and Using a Structure
```cpp
#include <iostream>
using namespace std;

// Defining a structure
struct Person {
    string name;
    int age;
};

int main() {
    Person p1 = {"Alice", 25};  // Initializing structure

    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;

    return 0;
}
