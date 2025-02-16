// Covers nested structures

#include <iostream>
using namespace std;

// Defining an Address structure
struct Address {
    string city;
    string country;
};

// Defining an Employee structure
struct Employee {
    string name;
    Address addr; // Nested structure
};

int main() {
    // Initializing an Employee structure with nested Address structure
    Employee emp = {"David", {"New York", "USA"}};

    // Accessing nested structure members
    cout << "Employee Name: " << emp.name << endl;
    cout << "City: " << emp.addr.city << ", Country: " << emp.addr.country << endl;

    return 0;
}
