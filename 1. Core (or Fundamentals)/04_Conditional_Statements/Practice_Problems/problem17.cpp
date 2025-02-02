// Write a program which takes the length of the sides of a triangle as an input.
// Display whether the triangle is valid or not.

#include <iostream>
using namespace std;

int main()
{
    float s1, s2, s3;
    cout << "Enter lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1))
    {
        cout << "The triangle is valid.";
    }
    else
    {
        cout << "The triangle is not valid.";
    }

    return 0;
}
