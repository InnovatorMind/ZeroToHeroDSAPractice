# File Handling in C++

## 📌 What is File Handling in C++?
File handling in C++ allows reading and writing data to files using the `<fstream>` library. This enables programs to store and retrieve data persistently.

## 🔥 What You'll Learn in This Directory:
This directory contains examples and explanations of:
- Opening and closing files
- Writing data to files
- Reading data from files
- File modes (`ios::in`, `ios::out`, `ios::app`, etc.)
- Working with `ofstream`, `ifstream`, and `fstream`

## 📝 Basic Syntax:

### 🔹 Writing to a File (`ofstream`)
```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt");  // Create and open a file

    if (file.is_open()) {
        file << "Hello, File Handling in C++!\n";  // Write to the file
        file.close();  // Close the file
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
