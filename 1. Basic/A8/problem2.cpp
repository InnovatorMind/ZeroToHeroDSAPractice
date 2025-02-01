// Print Numbers from 1 to N
// example Output- 1 2 3 4 5

#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) return;  // Base case
    printNumbers(n - 1);  // Recursive call first
    cout << n << " ";    // Printing after recursion
}

int main() {
    
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    printNumbers(num);
    return 0;
}
