// Write a program to take time as an input in below given format and convert the time format and display the result as given below.
// User Input date format - "HH:MM"
// Output format - "HH hour and MM Minute"

#include <iostream>
using namespace std;

int main() {
    int hour, minute;
    char colon;
    cout << "Enter time (HH:MM): ";
    cin >> hour >> colon >> minute;

    cout << hour << " hour and " << minute << " Minute" << endl;

    return 0;
}



