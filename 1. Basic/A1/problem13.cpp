// Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss eamed upon selling 25 bananas.

#include <iostream>
using namespace std;

int main()
{
    float costPrice, sellingPrice;
    cout << "Enter the cost price per dozen: ";
    cin >> costPrice;
    cout << "Enter the selling price per dozen: ";
    cin >> sellingPrice;

    float profitOrLoss = ((sellingPrice - costPrice) / 12) * 25;
    cout << "Profit or loss for selling 25 bananas is: " << profitOrLoss << endl;

    return 0;
}
