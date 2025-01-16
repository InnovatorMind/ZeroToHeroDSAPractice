// Character Return Type:

// Write a function getGrade that takes an integer score as a parameter and returns 
// a character representing the grade (e.g., 'A' for 90-100, 'B' for 80-89, etc.).


#include <iostream>
using namespace std;

// Function to get grade based on score
char getGrade(int score) {
    if (score >= 90 && score <= 100) {
        return 'A';
    } else if (score >= 80 && score < 90) {
        return 'B';
    } else if (score >= 70 && score < 80) {
        return 'C';
    } else if (score >= 60 && score < 70) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int score;
    cout << "Enter the score: ";
    cin >> score;

    // Call the getGrade function and store the result
    char grade = getGrade(score);

    // Display the grade
    cout << "The grade for score " << score << " is: " << grade << endl;

    return 0;
}
