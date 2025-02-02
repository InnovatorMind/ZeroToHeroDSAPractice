// Calculate the volume of a cuboid

#include <iostream>
using namespace std;

int main() {
    float l, w, h;
    cout << "Enter length, width, and height of the cuboid: ";
    cin >> l >> w >> h;

    float volume = l * w * h;
    cout << "The volume of the cuboid is: " << volume << endl;

    return 0;
}

