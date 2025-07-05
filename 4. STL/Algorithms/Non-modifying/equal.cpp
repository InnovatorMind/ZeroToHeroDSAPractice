#include <iostream>
#include <vector>
#include <algorithm>  // for equal
// #include <typeinfo>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {1, 2, 3, 4, 3};
    
    // auto myVar = equal(a.begin(), a.end(), b.begin());
    // cout << typeid(myVar).name();

    if (equal(a.begin(), a.end(), b.begin())) {
        cout << "The vectors are equal." << endl;
    } else {
        cout << "The vectors are NOT equal." << endl;
    }

    return 0;
}
