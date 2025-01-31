// Example: Full Dynamic Variable Program

#include <iostream>
using namespace std;

int main()
{
    // Step 1: Allocate memory for a single integer
    int *ptr = new int;

    // Step 2: Assign a value
    cout << "Enter a number: ";
    cin >> *ptr;

    // Step 3: Use the value
    cout << "You entered: " << *ptr << endl;

    // Step 4: Free the memory
    delete ptr;
    ptr = nullptr; // Avoid dangling pointers

    return 0;
}
