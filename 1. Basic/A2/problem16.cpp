// Write a program to check whether a given character is
// an alphabet (uppercase), an alphabet (lower case),
//  a digit or a special character

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is an uppercase alphabet.";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a lowercase alphabet.";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a digit.";
    }
    else
    {
        cout << ch << " is a special character.";
    }

    return 0;
}
