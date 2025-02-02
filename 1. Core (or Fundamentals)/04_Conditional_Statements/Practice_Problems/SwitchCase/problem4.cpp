// Write a program that takes a percentage as input and 
// displays the corresponding grade using switch case. 
// For example, 90-100 for A, 80-89 for B, etc.


#include <iostream>
using namespace std;

char getGrade(int percentage) {
    switch (percentage / 10) {
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'F';
    }
}

int main() {
    int percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;

    if (percentage < 0 || percentage > 100) {
        cout << "Invalid percentage. Please enter a value between 0 and 100." << endl;
    } else {
        char grade = getGrade(percentage);
        cout << "Your grade is: " << grade << endl;
    }

    return 0;
}
