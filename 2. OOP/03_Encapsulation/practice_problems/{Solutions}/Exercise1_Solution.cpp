// Exercise1_Solution.cpp

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    char grade;

public:
    // Setters
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if (a >= 5 && a <= 25) {
            age = a;
        } else {
            cout << "Invalid age provided." << endl;
        }
    }

    void setGrade(char g) {
        if (g >= 'A' && g <= 'F') {
            grade = g;
        } else {
            cout << "Invalid grade provided." << endl;
        }
    }

    // Getters
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    char getGrade() {
        return grade;
    }
};

int main() {
    Student student1;

    // Setting values
    student1.setName("John Doe");
    student1.setAge(20);
    student1.setGrade('B');

    // Attempt to set invalid values
    student1.setAge(30);     // Invalid age
    student1.setGrade('G');  // Invalid grade

    // Displaying student information
    cout << "Student Name: " << student1.getName() << endl;
    cout << "Age: " << student1.getAge() << endl;
    cout << "Grade: " << student1.getGrade() << endl;

    return 0;
}
