// Write a program which takes 
// the cost price and selling price of a product from the user. 
// Now calculate and print profit or loss percentage.

#include <iostream>
using namespace std;

int main() {
    float costPrice, sellingPrice, percentage;
    
    cout << "Enter cost price: ";
    cin >> costPrice;
    cout << "Enter selling price: ";
    cin >> sellingPrice;

    percentage = ((sellingPrice - costPrice) / costPrice) * 100;

    if (sellingPrice > costPrice) {
        cout << "Profit percentage: " << percentage << "%";
    } else if (sellingPrice < costPrice) {
        cout << "Loss percentage: " << -percentage << "%";
    } else {
        cout << "No profit, no loss.";
    }

    return 0;
}


