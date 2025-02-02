
#include <iostream>
#include <iomanip>  // Required for formatting
using namespace std;

int main() {
    double pi = 3.14159265359;
    int num = 123;

    cout << "Default Formatting: " << pi << endl;

    // Set precision and fixed formatting
    cout << fixed << setprecision(2);
    cout << "Fixed and Precision 2: " << pi << endl;

    // Width and filling
    cout << "Width 10 with fill '0': " << setw(10) << setfill('0') << num << endl;

    // Left alignment
    cout << "Left aligned: " << left << setw(10) << num << endl;

    return 0;
}
