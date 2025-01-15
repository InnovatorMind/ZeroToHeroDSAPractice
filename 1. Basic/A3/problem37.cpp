// Print a checkerboard pattern of stars.
// * * * * *
//  * * * *
// * * * * *
//  * * * *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n = 5; // Size of the checkerboard
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((i + j) % 2 == 0)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
