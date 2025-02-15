#include <iostream>
using namespace std;

void increment(int& value) {  // Pass by reference
    value++;
}

int main() {
    int num = 10;
    increment(num);
    cout << "Incremented Value: " << num << endl;
    return 0;
}
