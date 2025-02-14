#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int* ptr = arr;  // Points to first element

    cout << "First element: " << *ptr << endl;
    ptr++;  // Move to the next element
    cout << "Second element: " << *ptr << endl;

    return 0;
}
