// Writing to a File using ofstream
// 📌 Explanation
// ofstream (output file stream) is used to write data to a file.
// The file is created if it doesn’t exist.
// The close() function ensures that the file is saved properly.

#include <iostream>
#include <fstream>  // Include fstream for file handling
using namespace std;

int main() {
    ofstream file("output.txt");  // Create and open the file

    if (file.is_open()) {  // Check if the file is successfully opened
        file << "Hello, this is a test file.\n";
        file << "Writing to files in C++ is easy!\n";
        file.close();  // Close the file to save changes
        cout << "Data written successfully to output.txt\n";
    } else {
        cout << "Error opening file for writing!" << endl;
    }

    return 0;
}

// 📝 Output in output.txt
// Hello, this is a test file.
// Writing to files in C++ is easy!