#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, int> mp = {
        {1, 10},
        {2, 20},
        {3, 30},
        {4, 40},
        {5, 50}
    };

    int target = 3;
    if(mp.count(target))
    {
        cout << mp[target] << endl;
    }
    
    return 0;
}