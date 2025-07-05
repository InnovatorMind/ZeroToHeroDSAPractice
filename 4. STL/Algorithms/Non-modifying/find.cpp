// find a string in it!!

#include <iostream>
#include <vector>
#include <algorithm> // for find
using namespace std;


int main() {
    char target = 'e';
    string demo = "ho gya kaam";

    auto it = find(demo.begin(), demo.end(), target);
    cout<< *it <<endl;
    if (it != demo.end()) {
        cout << "Found " << target << " at index " << (it - demo.begin()) << endl;
    } else {
        cout << target << " not found!" << endl;
    }

    return 0;
}