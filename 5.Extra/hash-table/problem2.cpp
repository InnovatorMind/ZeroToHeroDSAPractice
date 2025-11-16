// First Non-Repeating Character
// Given a string:
// "sSwiss"
// Task:
// Using unordered_map<char, int>, find the first character that appears only once.
// Requirements:
// Count frequencies using a hash map
// Then scan the string again and find the first char with frequency == 1
// If no such char exists, return something like '?'


#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string str = "sSwiss";
    unordered_map<char, int> freqMap;

    // Count frequencies of each character
    for (char ch : str)
    {
        freqMap[ch]++;
    }

    for(auto pair : freqMap)
    {
        cout << pair.first << " : " << pair.second << endl;
    }

    // Find the first non-repeating character
    char firstNonRepeatingChar = '?';
    for (char ch : str)
    {
        if (freqMap[ch] == 1)
        {
            firstNonRepeatingChar = ch;
            break;
        }
    }


    cout << "First non-repeating character: " << firstNonRepeatingChar << endl;

    return 0;
}