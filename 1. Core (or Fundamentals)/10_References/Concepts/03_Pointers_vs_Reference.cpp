#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;
    int* ptr = &x;  // Pointer
    int& ref = x;   // Reference

    ptr = &y;  // Pointer can change what it points to
    // ref = &y; // ❌ Error! References cannot be reassigned

    return 0;
}
