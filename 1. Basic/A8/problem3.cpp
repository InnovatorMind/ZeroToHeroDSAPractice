// Sum of First N Natural Numbers

#include <iostream>
using namespace std;

int sumOfNumbers(int n) {
    if (n == 0) return 0;  // Base case
    return n + sumOfNumbers(n - 1);  // Recursive call
}

int main() {
    
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    cout << "Sum of first 5 numbers: " << sumOfNumbers(num);
    return 0;
}
