// Exercise1_Solution.cpp

#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    // Default constructor
    Time() : hours(0), minutes(0) {}

    // Parameterized constructor
    Time(int h, int m) {
        hours = h + m / 60;
        minutes = m % 60;
    }

    // Copy constructor
    Time(const Time &t) {
        hours = t.hours;
        minutes = t.minutes;
    }

    // Display time in HH:MM format
    void displayTime() {
        cout << "Time: " << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << endl;
    }
};

int main() {
    Time t1;             // Default constructor
    Time t2(2, 50);      // Parameterized constructor
    Time t3 = t2;        // Copy constructor

    t1.displayTime();    // Output: Time: 00:00
    t2.displayTime();    // Output: Time: 02:50
    t3.displayTime();    // Output: Time: 02:50

    return 0;
}

