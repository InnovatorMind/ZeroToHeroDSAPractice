// 3. Longest Substring Without Repeating Characters
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int lengthOfLongestSubstring(string s)
{
    int maxLength = 0;
    for (char i = 0; i < s.length(); i++)
    {
        int j = i;
        int strLength = 0;
        bitset<256> charSet;
        while (j < s.length()) {
            if (!charSet.test(s[j])) {
                charSet.set(s[j]);
                strLength++;
            }
            else {
                j = i;
                break;
            }
            j++;
        }
        if (strLength > maxLength){
            maxLength = strLength;
        }
    }
    return maxLength;
}

int main()
{
    string s = "abcabcbb";
    cout << "Length of longest substring without repeating characters = " << lengthOfLongestSubstring(s) << endl;
    return 0;
}