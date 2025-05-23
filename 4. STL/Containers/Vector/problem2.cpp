// Print all elements of a vector using a loop.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};  
    
    // for (int i = 0; i < numbers.size(); i++) {
    //     cout << numbers[i] << " ";
    // }

    // another variation
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}

