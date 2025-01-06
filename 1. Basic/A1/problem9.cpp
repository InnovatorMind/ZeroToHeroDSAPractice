// Find the area of a circle

#include <iostream>
using namespace std;
int main()
{
    int r;
    float pi = 3.14, area;

    cout << "Enter radius of the cirlce : ";
    cin >> r;
    area = pi * r * r;

    cout << "Area of circle " <<area <<" having radius " <<r <<endl;

    return 0;
}