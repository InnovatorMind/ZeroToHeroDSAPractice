// Exercise1_Solution.cpp

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

// Single Inheritance
class Employee : public Person {
protected:
    int employeeID;

public:
    void setEmployeeID(int id) {
        employeeID = id;
    }

    void displayEmployee() {
        displayName();
        cout << "Employee ID: " << employeeID << endl << endl;
    }
};

// Multilevel Inheritance
class Manager : public Employee {
private:
    string department;

public:
    void setDepartment(string dept) {
        department = dept;
    }

    void displayManager() {
        displayName();
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl << endl;
    }
};

// Hierarchical Inheritance
class Student : public Person {
private:
    int studentID;

public:
    void setStudentID(int id) {
        studentID = id;
    }

    void displayStudent() {
        displayName();
        cout << "Student ID: " << studentID << endl << endl;
    }
};

int main() {
    // Employee object
    Employee emp;
    emp.setName("Alice");
    emp.setEmployeeID(123);
    emp.displayEmployee();

    // Manager object
    Manager mgr;
    mgr.setName("Bob");
    mgr.setEmployeeID(456);
    mgr.setDepartment("Sales");
    mgr.displayManager();

    // Student object
    Student stu;
    stu.setName("Charlie");
    stu.setStudentID(789);
    stu.displayStudent();

    return 0;
}
