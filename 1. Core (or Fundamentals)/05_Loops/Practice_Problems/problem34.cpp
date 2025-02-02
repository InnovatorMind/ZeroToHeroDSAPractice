// Print a pyramid pattern of numbers.

//     1
//    222
//   33333
//  4444444
// 555555555

#include <iostream>
using namespace std;

int main()
{
    int n = 5; // Number of rows
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); ++k)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
