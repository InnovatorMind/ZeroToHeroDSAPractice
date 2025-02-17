// Reading from a File using ifstream
// 📌 Explanation
// ifstream (input file stream) is used to read data from a file.
// getline(file, line) reads the file line by line.
// The eof() function helps check the end of the file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("output.txt");  // Open file for reading
    string line;

    if (file.is_open()) {  // Check if file exists and is readable
        while (getline(file, line)) {  // Read file line by line
            cout << line << endl;
        }
        file.close();  // Close the file after reading
    } else {
        cout << "Error opening file for reading!" << endl;
    }

    return 0;
}

// 📝 Console Output
// Hello, this is a test file.
// Writing to files in C++ is easy!
// (Output will depend on output.txt content.)