// Write a program that takes two numbers and an operator (+, -, *, /) as input and performs the corresponding arithmetic operation using switch case.

#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Result: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Invalid operator. Please enter one of (+, -, *, /)." << endl;
    }

    return 0;
}
