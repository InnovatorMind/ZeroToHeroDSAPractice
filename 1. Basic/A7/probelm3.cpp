// Define a struct called Time with members hours (int), minutes (int), and seconds (int). 
// Create an instance of the Time struct and initialize it with some values. 
// Print the time in the format HH:MM:SS in the main function.

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
    // Create an instance of the Time struct
    Time time1;
    time1.hours = 10;
    time1.minutes = 30;
    time1.seconds = 45;

    // Print the time in the format HH:MM:SS
    cout << "Time: " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;

    return 0;
}



