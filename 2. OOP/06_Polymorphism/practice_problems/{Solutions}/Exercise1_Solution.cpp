// Exercise1_Solution.cpp

#include <iostream>
using namespace std;

class Multiplier {
public:
    // Multiply two integers
    int multiply(int a, int b) {
        return a * b;
    }
    
    // Multiply two doubles
    double multiply(double a, double b) {
        return a * b;
    }
    
    // Multiply three integers
    int multiply(int a, int b, int c) {
        return a * b * c;
    }
};

int main() {
    Multiplier m;
    
    cout << "Product of two integers: " << m.multiply(3, 4) << endl;
    cout << "Product of two doubles: " << m.multiply(2.5, 4.2) << endl;
    cout << "Product of three integers: " << m.multiply(2, 3, 4) << endl;
    
    return 0;
}

