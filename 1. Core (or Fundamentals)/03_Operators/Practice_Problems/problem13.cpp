// Assume price of 1 USD is INR 84.23. 
// Write a program to take the amount in INR and convert it into USD.

#include <iostream>
using namespace std;

int main() {
    float inr, usd;
    const float conversion_rate = 84.23;
    cout << "Enter amount in INR: ";
    cin >> inr;
    usd = inr / conversion_rate;
    cout << "Equivalent amount in USD: " << usd << endl;
    return 0;
}
