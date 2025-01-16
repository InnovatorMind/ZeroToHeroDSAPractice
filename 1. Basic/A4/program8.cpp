// String Return Type:

// Write a function getFullName that takes two string parameters (first name and last name) 
// and returns the full name concatenated as a single string

#include <iostream>
#include <string>
using namespace std;

// Function that concatenates first name and last name
string getFullName(string firstName, string lastName) {
    return firstName + " " + lastName;
}

int main() {
    string firstName, lastName;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    // Call the getFullName function and store the result
    string fullName = getFullName(firstName, lastName);

    // Display the full name
    cout << "Full name: " << fullName << endl;

    return 0;
}
