// Access the first and last element using `front()` and `back()`.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "First element (front): " << numbers.front() << endl;
    cout << "Last element (back): " << numbers.back() << endl;

    return 0;
}
