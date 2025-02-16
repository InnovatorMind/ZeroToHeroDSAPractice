#include <iostream>
using namespace std;

// Defining a structure
struct Person {
    string name;
    int age;
};

int main() {
    // Initializing a structure variable
    Person p1 = {"Alice", 25};

    // Displaying structure data
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;

    return 0;
}
