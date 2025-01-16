// Default Parameters:

// Write a function greet that takes a single string parameter for the name and
//  a second parameter for the greeting message with a default value of "Hello".
// The function should print the greeting message followed by the name. 
// Call this function from the main function with and without the second parameter.

#include <iostream>
using namespace std;

// Function with a default parameter for the greeting message
void greet(string name, string greeting = "Hello") {
    cout << greeting << ", " << name << "!" << endl;
}

int main() {
    string name1 = "Alice";
    string name2 = "Bob";

    // Call the function with both parameters
    greet(name1, "Welcome");

    // Call the function with only the name parameter, using the default greeting
    greet(name2);

    return 0;
}


