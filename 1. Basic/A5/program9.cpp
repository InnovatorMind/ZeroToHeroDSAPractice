// Compare two pointers and check if they point to the same address:

#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    if (ptr1 == ptr2) {
        cout << "ptr1 and ptr2 point to the same address." << endl;
    } else {
        cout << "ptr1 and ptr2 do not point to the same address." << endl;
    }

    return 0;
}


