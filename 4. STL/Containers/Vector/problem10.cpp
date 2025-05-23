// 10. Erase the element at index 3 using `erase()`.


#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    numbers.erase(numbers.begin() + 3);

    // Printing the updated vector
    for (int num : numbers) {
        cout << num << " ";
    }

    cout<<"\nSize is: " << numbers.size();

    return 0;
}
