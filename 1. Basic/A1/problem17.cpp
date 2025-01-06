// Write a program to take date as an input in below given format and convert the date format
// and display the result as given below.
// User Input date format - "DD/MM/YYYY" (27/11/2022)
// Output format - "Day - DD, Month - MM, Year - YYYY" (Day-27, Month-07.
// Year - 2022)

#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    char slash;
    cout << "Enter date (DD/MM/YYYY): ";
    cin >> day >> slash >> month >> slash >> year;

    cout << "Day – " << day << " , Month – " << month << " , Year – " << year << endl;

    return 0;
}

// You can use other characters as delimiters too. Here are a few alternatives:
// Hyphen (-)
// Space ()
// Dot (.)
// Colon (:)