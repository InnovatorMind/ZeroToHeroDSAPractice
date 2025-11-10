#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<char, int> lol;

    char ch = 'a';
    lol[ch]++;
    lol[ch]++;
    lol[ch]++;

    for (auto pair : lol)
    {
        cout << pair.first << " scored " << pair.second << endl; // a | 3
    }

    return 0;
}