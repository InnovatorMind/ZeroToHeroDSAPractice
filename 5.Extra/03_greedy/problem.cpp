#include <iostream>
#include <vector>
using namespace std;

void greedyCoinChange(int amount, vector<int>& coins) {
    cout << "Coins used to make ₹" << amount << ": ";
    for (int i = coins.size() - 1; i >= 0; i--) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            cout << coins[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> coins = {1, 2, 5, 10}; // sorted ascending
    int amount = 34;
    greedyCoinChange(amount, coins);
    return 0;
}
