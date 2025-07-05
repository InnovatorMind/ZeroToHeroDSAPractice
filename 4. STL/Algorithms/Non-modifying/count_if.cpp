#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {3, 5, 6, 9, 10, 12, 14};

    int total = count_if(nums.begin(), nums.end(), [](int x) {
        return x % 3 == 0;
    });

    cout << "Numbers divisible by 3: " << total << endl;
    return 0;
}
