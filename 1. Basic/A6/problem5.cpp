// Write a program that takes a character as input and
//  uses switch case to check whether it is a vowel or a consonant

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (tolower(ch)) { // Using tolower to handle both uppercase and lowercase
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                cout << ch << " is a consonant." << endl;
            } else {
                cout << ch << " is not an alphabetic character." << endl;
            }
    }

    return 0;
}
