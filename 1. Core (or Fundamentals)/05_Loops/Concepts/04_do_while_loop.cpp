#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Ensures at least one execution before checking the condition
    do {
        cout << "Enter a positive number: ";
        cin >> num;
    } while (num <= 0);
    
    cout << "You entered: " << num << endl;
    return 0;
}


