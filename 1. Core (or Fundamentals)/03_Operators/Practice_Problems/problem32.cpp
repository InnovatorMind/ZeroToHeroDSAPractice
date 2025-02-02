// What will be the value stored in the variable x after executing following statement:
// x=10>8>4;
// What will be the value stored in the variable x after executing following statement:
// x=12>-2;
//  What will be the value stored in the variable x after executing following statement:
// x=3<0&&5>0

#include <iostream>
using namespace std;

int main() {
    // Statement 1
    int x1 = 10 > 8 > 4;
    cout << "Value of x1 (10 > 8 > 4): " << x1 << endl;

    // Statement 2
    int x2 = 12 > -2;
    cout << "Value of x2 (12 > -2): " << x2 << endl;

    // Statement 3
    int x3 = 3 < 0 && 5 > 0;
    cout << "Value of x3 (3 < 0 && 5 > 0): " << x3 << endl;

    return 0;
}


// Explanation and Output:

// Statement 1:
// int x1 = 10 > 8 > 4;
// Step 1: 10 > 8 evaluates to true (which is 1 in C++).
// Step 2: 1 > 4 evaluates to false (0).
// Step 3: Hence, the value of x1 is 0.

// Statement 2:
// int x2 = 12 > -2;
// Step 1: 12 > -2 evaluates to true (1).
// Step 2: Hence, the value of x2 is 1.

// Statement 3:
// int x3 = 3 < 0 && 5 > 0;
// Step 1: 3 < 0 evaluates to false (0).
// Step 2: 5 > 0 evaluates to true (1).
// Step 3: The logical AND operator && requires both conditions to be true, but since one condition is false, the entire expression evaluates to false (0).
// Step 4: Hence, the value of x3 is 0


// Program Output:
// Value of x1 (10 > 8 > 4): 0
// Value of x2 (12 > -2): 1
// Value of x3 (3 < 0 && 5 > 0): 0

