// Appending Data to a File
// 📌 Explanation
// ofstream with ios::app mode appends new data instead of overwriting the file.
// New content is added at the end of the existing file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt", ios::app);  // Open file in append mode

    if (file.is_open()) {
        file << "Appending a new line to the file.\n";
        file.close();
        cout << "Data appended successfully to output.txt\n";
    } else {
        cout << "Error opening file for appending!" << endl;
    }

    return 0;
}


// 📝 Updated output.txt Content
// Hello, this is a test file.
// Writing to files in C++ is easy!
// Appending a new line to the file.