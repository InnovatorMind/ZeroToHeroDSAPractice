// Write a program to check whether a given 
// alphabet is in uppercase or lowercase.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The alphabet is uppercase.";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "The alphabet is lowercase.";
    }
    else
    {
        cout << "Invalid input.";
    }
    return 0;
}
