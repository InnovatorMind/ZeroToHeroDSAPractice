#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << "Initial value: " << x << endl;
    
    cout << "Post-increment (x++): " << x++ << endl;
    cout << "After post-increment: " << x << endl;
    
    cout << "Pre-increment (++x): " << ++x << endl;
    
    cout << "Post-decrement (x--): " << x-- << endl;
    cout << "After post-decrement: " << x << endl;
    
    cout << "Pre-decrement (--x): " << --x << endl;
    
    return 0;
}

