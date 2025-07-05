// Count how many times 'i' appears in a string:

#include <iostream>
#include <vector>
#include <algorithm>  // for count
using namespace std;

int main() {
    string nums = "This is a string for testing!";

    char target = 'i';
    int total = count(nums.begin(), nums.end(), target);

    cout << target << " appears " << total << " times." << endl;

    return 0;
}
