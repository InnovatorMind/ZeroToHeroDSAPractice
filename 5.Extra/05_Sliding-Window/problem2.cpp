// 121. Best Time to Buy and Sell Stock

#include <vector>
#include <iostream>

using namespace std;

int maxProfit(vector<int> &prices) {
    int left = 0;
    int right = 1;
    int maxProfit = 0;

    while (right < prices.size()) {
        if (prices[right] > prices[left]) {
            int profit = prices[right] - prices[left];
            maxProfit = max(maxProfit, profit);
        } else {
            left = right;
        }
        right++;
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit = " << maxProfit(prices) << endl;
    return 0;
}