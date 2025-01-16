//c Write a function displayInfo that takes the following parameters:

// An integer representing an ID number.
// A float representing a balance.
// A double representing a high precision value.
// A character representing a grade.
// A string representing a name.


#include <iostream>
#include <string>
using namespace std;

// Function to display various types of data
void displayInfo(int id, float balance, double highPrecisionValue, char grade, string name) {
    cout << "ID: " << id << endl;
    cout << "Balance: " << balance << endl;
    cout << "High Precision Value: " << highPrecisionValue << endl;
    cout << "Grade: " << grade << endl;
    cout << "Name: " << name << endl;
}

int main() {
    int id = 12345;
    float balance = 543.21f;
    double highPrecisionValue = 0.000123456789;
    char grade = 'A';
    string name = "John Doe";

    // Call the displayInfo function with various types of data
    displayInfo(id, balance, highPrecisionValue, grade, name);

    return 0;
}
