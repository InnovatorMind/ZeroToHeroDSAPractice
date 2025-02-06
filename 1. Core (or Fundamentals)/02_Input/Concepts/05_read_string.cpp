// Reads a string using cin

#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";
    cin >> name;  // Using cin to take string input
    cout << "You entered: " << name << endl;
    return 0;
}


// probem with normal str input 
// Expected Input & Output 

// Enter your full name: John Doe
// You entered: John
// ❌ Problem:
// Only "John" is stored in name, and "Doe" is left in the input buffer, ignored by cin