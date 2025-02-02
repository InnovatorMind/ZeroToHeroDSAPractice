// . Write a program to input an ASCII code from the user and print its corresponding character.

#include <iostream>
using namespace std;

int main()
{
    int asciiCode;
    cout << "Enter an ASCII code: ";
    cin >> asciiCode;

    cout << "The character for ASCII code " << asciiCode << " is: " << char(asciiCode) << endl;

    return 0;
}
