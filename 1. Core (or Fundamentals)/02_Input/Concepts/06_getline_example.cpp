// Reads an entire line using getline()
// works with inputs which contain a dash or blank 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "Enter a full line of text: ";
    getline(cin, line);
    cout << "You entered: " << line << endl;
    return 0;
}


// output 
// Enter a full line of text: Hello, how are you?
// You entered: Hello, how are you?

// Enter a full line of text: C++ is awesome!
// You entered: C++ is awesome!

