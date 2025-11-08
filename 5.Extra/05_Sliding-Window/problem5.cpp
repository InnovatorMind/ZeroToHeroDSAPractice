#include<iostream>
#include<vector>
using namespace std;

bool checkInclusion(string s1, string s2)
{
    if (s1.length() > s2.length())
        return false;

    vector<int> abc(26, 0), xyz(26, 0);

    for (char c : s1)
        abc[c - 'a']++;

    for (int i = 0; i < s2.length(); ++i)
    {
        xyz[s2[i] - 'a']++;
        if (i >= s1.length())
        {
            xyz[s2[i - s1.length()] - 'a']--;
        }

        if (abc == xyz)
            return true;
    }

    return false;
}

int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    if (checkInclusion(s1, s2))
        cout << "s2 contains a permutation of s1" << endl;
    else
        cout << "s2 does not contain a permutation of s1" << endl;

    return 0;
}