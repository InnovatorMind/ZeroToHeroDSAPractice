
// Exercise2_Solution.cpp

#include <iostream>
#include <string>
using namespace std;

// Interface (abstract class) for printable objects
class Printable {
public:
    virtual void print() const = 0;
    
    // Virtual destructor for proper cleanup
    virtual ~Printable() {}
};

// Report class implementing the Printable interface
class Report : public Printable {
private:
    string title;
public:
    Report(const string &t) : title(t) {}
    
    void print() const override {
        cout << "Report Title: " << title << endl;
    }
};

int main() {
    Report financialReport("Annual Financial Summary");
    financialReport.print(); // Should output: Report Title: Annual Financial Summary
    return 0;
}


// ## Final Notes

// - **Abstraction** helps separate concepts and hide unnecessary details.  
// - Abstract classes force derived classes to implement specific functionality, enhancing modularity and maintainability.  
// - Interfaces (modeled by abstract classes with all pure virtual functions) allow designing clear contracts for behavior.

// Feel free to experiment further by extending these examples, and if you have any questions or need additional modifications, just let me know!

// Happy coding and enjoy your journey into abstraction!