// 8. Remove the last element using `pop_back()`.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};

    numbers.pop_back();

    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
