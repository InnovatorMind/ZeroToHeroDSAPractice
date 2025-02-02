// Write a program to print
// cubes of the first 10 natural numbers

#include <iostream>
#include <cmath> // For using pow() function

using namespace std;

int main()
{
    cout << "Cubes of the first 10 natural numbers:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i * i * i << " "; // Calculate cube using i * i *i
        // Alternatively, you can use the pow() function:
        // cout << pow(i, 3) << " ";
    }
    cout << endl;

    return 0;
}
