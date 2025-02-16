// Demonstrates pointers to structures

#include <iostream>
using namespace std;

// Defining a structure
struct Student {
    string name;
    int id;
};

int main() {
    Student s1 = {"John", 101}; // Initializing structure
    Student* ptr = &s1; // Pointer to structure

    // Accessing members using pointer (-> operator)
    cout << "Student Name: " << ptr->name << endl;
    cout << "Student ID: " << ptr->id << endl;

    // Modifying structure members using pointer
    ptr->id = 202; 
    cout << "Updated Student ID: " << s1.id << endl;

    return 0;
}
