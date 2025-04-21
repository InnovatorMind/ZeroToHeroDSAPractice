// 11. Clear the vector using `clear()` and show its size.


#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    
    // Clear the vector
    numbers.clear();

    cout << "Size after clear(): " << numbers.size() << endl;

    return 0;
}
