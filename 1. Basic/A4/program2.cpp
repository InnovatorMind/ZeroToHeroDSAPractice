// Function that takes one integer argument and displays it

#include <iostream>
using namespace std;

// one integer argument 
void displayNumber(int number) {
    cout << "The number is: " << number << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the function to display the number
    displayNumber(num);

    return 0;
}
