#include <iostream>
using namespace std;

// Structure definition
struct Car {
    string brand;
    int year;
};

int main() {
    Car myCar; // Creating a structure variable

    // Assigning values to structure members
    myCar.brand = "Toyota";
    myCar.year = 2022;

    // Modifying structure members
    myCar.year = 2023; // Changing year value

    // Displaying the values
    cout << "Car Brand: " << myCar.brand << endl;
    cout << "Manufacturing Year: " << myCar.year << endl;

    return 0;
}
