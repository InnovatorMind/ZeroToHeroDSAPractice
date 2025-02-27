// Exercise2_Solution.cpp

#include <iostream>
#include <iomanip>
using namespace std;

class Vehicle {
public:
    virtual double getMaxSpeed() {
        return 0;
    }
    
    // Virtual destructor for cleanup
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
private:
    double maxSpeed;
public:
    Car(double speed) : maxSpeed(speed) {}
    
    double getMaxSpeed() override {
        return maxSpeed;
    }
};

class Motorcycle : public Vehicle {
private:
    double maxSpeed;
public:
    Motorcycle(double speed) : maxSpeed(speed) {}
    
    double getMaxSpeed() override {
        return maxSpeed;
    }
};

int main() {
    Vehicle* vehicles[2];
    vehicles[0] = new Car(180.0);
    vehicles[1] = new Motorcycle(150.0);
    
    for (int i = 0; i < 2; ++i) {
        cout << fixed << setprecision(2);
        cout << "Max speed of vehicle " << i + 1 << ": " << vehicles[i]->getMaxSpeed() << endl;
    }
    
    // Clean up
    delete vehicles[0];
    delete vehicles[1];
    
    return 0;
}

// ## Notes

// - **Overloading:** Demonstrated through different versions of the `multiply()` method in the `Multiplier` class.
// - **Overriding and Virtual Functions:** Illustrated with a `Vehicle` base class and derived classes (`Car` and `Motorcycle`) providing their specific behaviors.
// - Format output consistently with `<iomanip>` for clear presentation.

// ---

// ## Additional Exercises (Optional)

// - **Exercise 3:** Create a class that overloads operators (e.g., a `Fraction` class that overloads the `+` operator).
// - **Exercise 4:** Extend the virtual function exercise by adding another derived class (like `Truck`) and comparing more attributes.

// ---

// By following these steps and exploring the examples provided, you'll gain a deep understanding of both compile-time and runtime polymorphism in C++. If you have any questions or need further clarification, feel free to ask!

// Happy coding and continue exploring the wonders of OOP!
