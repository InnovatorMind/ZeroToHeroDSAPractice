#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) { // Condition to check if number is positive
        cout << "The number is positive." << endl;
    }

    cout << "Program ended." << endl;
    return 0;
}
