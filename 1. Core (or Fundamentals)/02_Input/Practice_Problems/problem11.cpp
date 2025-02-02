// Calculate the circumference of a circle

#include <iostream>
using namespace std;

int main()
{
    float radius;
    float pi = 3.14;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float circumference = 2 * pi * radius;
    cout << "The circumference is: " << circumference << endl;

    return 0;
}
