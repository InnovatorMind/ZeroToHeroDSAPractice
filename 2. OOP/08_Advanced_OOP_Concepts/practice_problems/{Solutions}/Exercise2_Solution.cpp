// Exercise2_Solution.cpp

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    static int count; // Static member to keep track of student objects
public:
    Student(const string &n, int a) : name(n), age(a) {
        count++;
    }

    // Friend function to print student details
    friend void printStudent(const Student &s);

    static int getCount() {
        return count;
    }
};

// Define static member
int Student::count = 0;

void printStudent(const Student &s) {
    cout << "Name: " << s.name << ", Age: " << s.age << endl;
}

int main() {
    Student s1("Alice", 20);
    Student s2("Bob", 22);
    
    printStudent(s1);
    printStudent(s2);
    
    cout << "Total Students: " << Student::getCount() << endl; // Should print 2
    return 0;
}



// ## Final Notes

// - **Operator Overloading:** Allows you to extend the meaning of operators for your classes.
// - **Friend Functions/Classes:** Provide controlled access to private members when needed.
// - **Static Members:** Enable you to maintain class-level data that is shared among all instances.

// These advanced concepts help you build more concise, intuitive, and maintainable C++ programs. Experiment further by extending these examples or combining concepts in creative ways.

// If you have any questions or need further explanations, feel free to ask!

// Happy coding!