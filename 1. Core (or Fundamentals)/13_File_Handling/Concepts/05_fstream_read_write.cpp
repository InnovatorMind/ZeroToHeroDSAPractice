// Using fstream for Both Reading and Writing
// 📌 Explanation
// fstream is a flexible file stream that allows both reading and writing.
// It opens the file in ios::in | ios::out | ios::app mode.
// The seekg(0) function moves the read pointer to the beginning after writing.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream file;
    file.open("data.txt", ios::out | ios::in | ios::app);  // Open for both reading & writing

    if (file.is_open()) {
        // Writing to the file
        file << "Writing using fstream.\n";
        
        // Move read pointer to beginning
        file.seekg(0);

        // Reading from the file
        string line;
        cout << "File content:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}


// 📝 Example Console Output
// File content:
// Writing using fstream.