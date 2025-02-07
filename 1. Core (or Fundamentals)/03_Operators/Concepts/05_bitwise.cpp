#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 3;  // 5 = 0101, 3 = 0011 (in binary)
    cout << "Bitwise AND (x & y): " << (x & y) << endl;
    cout << "Bitwise OR (x | y): " << (x | y) << endl;
    cout << "Bitwise XOR (x ^ y): " << (x ^ y) << endl;
    cout << "Bitwise NOT (~x): " << (~x) << endl;
    cout << "Left Shift (x << 1): " << (x << 1) << endl;
    cout << "Right Shift (x >> 1): " << (x >> 1) << endl;
    return 0;
}
