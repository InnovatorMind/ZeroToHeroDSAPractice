// Find the first vowel in a string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "bcdEfgh";
    
    auto it = find_if(str.begin(), str.end(), [](char ch) {
        char lower = tolower(ch);
        return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
    });

    if (it != str.end()) {
        cout << "First vowel: " << *it << " at position " << (it - str.begin()) << endl;
    } else {
        cout << "No vowel found." << endl;
    }

    return 0;
}
