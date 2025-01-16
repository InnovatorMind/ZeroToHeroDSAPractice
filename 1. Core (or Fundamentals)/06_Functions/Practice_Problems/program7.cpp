// Integer Return Type:

// Write a function add that takes two integers as parameters and returns their sum. 
// Demonstrate its use in the main function by adding two numbers and displaying the result.

#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Call the add function and store the result
    int sum = add(num1, num2);

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
