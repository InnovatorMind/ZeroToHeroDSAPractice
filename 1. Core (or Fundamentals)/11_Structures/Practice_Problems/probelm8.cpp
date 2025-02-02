// Define a struct called Student with the following:

// name (string)
// marks (float array of size 5)
// A member function averageMarks() that calculates and returns the average marks.

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    float marks[5];

    // Member function to calculate average marks
    float averageMarks() {
        float sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += marks[i];
        }
        return sum / 5; // Calculate average
    }
};

int main() {
    // Create an instance of Student
    Student student1 = {"Alice", {85.5, 90.0, 78.5, 88.0, 92.5}};

    // Display student details and average marks
    cout << "Student Name: " << student1.name << "\n";
    cout << "Average Marks: " << student1.averageMarks() << "\n";

    return 0;
}


