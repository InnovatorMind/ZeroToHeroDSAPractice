// Define a struct called Point with members x (int) and y (int). 
// Create an instance of the Point struct using member initializer list 
// and initialize it with values x = 5 and y = 10. 
// Print the values of x and y in the main function.


#include <iostream>

// Use the standard namespace
using namespace std;

// Define the struct
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    // Using member initializer list
    Time time1 = {10, 30, 45};
    cout << "Time (Member Initializer List): " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;

    // Using default member initialization
    Time time2;
    time2.hours = 10;
    time2.minutes = 30;
    time2.seconds = 45;
    cout << "Time (Default Member Initialization): " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;

    return 0;
}

