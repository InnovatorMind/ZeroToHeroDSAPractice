// Write a program to take marks of 5 subjects from the user.
// Assume marks are given out of 100 and passing marks is 33.
//  Now display whether the candidate passed the examination or failed.

#include <iostream>
using namespace std;

int main()
{
    int marks1, marks2, marks3, marks4, marks5;
    cout << "Enter marks for 5 subjects (out of 100): ";
    cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;

    if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33 && marks4 >= 33 && marks5 >= 33)
    {
        cout << "The candidate passed the examination.";
    }
    else
    {
        cout << "The candidate failed the examination.";
    }

    return 0;
}
