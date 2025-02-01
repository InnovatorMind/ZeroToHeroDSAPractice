// Print Numbers from N to 1 (Basic Recursion Example)
// example Output 5 4 3 2 1

#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) return;  // Base case
    cout << n << " ";
    printNumbers(n - 1);  // Recursive call
}

int main() {

    int num;
    cout << "Enter a Number: ";
    cin >> num;
    printNumbers(num);
    return 0;
}

/*

printNumbers(5)
 ├── print 5
 ├── call printNumbers(4)
       ├── print 4
       ├── call printNumbers(3)
             ├── print 3
             ├── call printNumbers(2)
                   ├── print 2
                   ├── call printNumbers(1)
                         ├── print 1
                         ├── call printNumbers(0)  // Base Case Reached! Returns.
*/