// Write a program to print
//  squares of the first 10 natural numbers

#include <iostream>
#include <cmath> // For using pow() function

using namespace std;

int main()
{
    cout << "Squares of the first 10 natural numbers:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i * i << " "; // Calculate square using i * i
        // Alternatively, you can use the pow() function:
        // cout << pow(i, 2) << " ";
    }
    cout << endl;

    return 0;
}