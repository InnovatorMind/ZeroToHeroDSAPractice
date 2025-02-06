// Explains buffer issues and how to fix them when mixing cin and getline()


#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    string line;

    cout << "Enter an integer: ";
    cin >> num;  // Takes integer input

    cin.ignore();  // Clears the input buffer to fix the issue

    cout << "Enter a full line of text: ";
    getline(cin, line);  // Takes full line input

    cout << "You entered the number: " << num << endl;
    cout << "You entered the line: " << line << endl;

    return 0;
}


// Shows the issue that occurs when mixing cin and getline(). 
// It uses cin.ignore() to clear the input buffer before reading a line

// What Happens Without cin.ignore()?
// Enter an integer: 42
// Enter a full line of text: You entered the number: 42
// You entered the line: 
// ❌ Problem: The second input is skipped!
// getline(cin, line); reads the leftover \n from cin >> num, so it never waits for user input.


// What Happens WITH cin.ignore()?
// Enter an integer: 42
// Enter a full line of text: Hello, this is a test!
// You entered the number: 42
// You entered the line: Hello, this is a test!