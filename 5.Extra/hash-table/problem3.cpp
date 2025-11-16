
// # Check if Two Strings Are Anagrams**
// (Difficulty: Medium)
// Two strings are **anagrams** if they contain the exact same characters with the same frequencies, but possibly in a different order.
// ### Example:
// ```
// "listen"
// "silent"
// ```
// → These are anagrams.
// ---
// ### **Task:**
// Given two strings:
// ```
// string s1 = "triangle";
// string s2 = "integral";
// ```

// Using **unordered_map<char, int>**, determine if they are anagrams.
// ---
// ### Requirements:
// 1. Use one or two unordered_maps
// 2. Compare character frequencies
// 3. Return a boolean answer (true/false)
// ---

// ### Expected Answer Format:
// Just tell me:
// ```
// Are anagrams? true / false
// ```

#include <iostream>
#include <unordered_map>

using namespace std;

bool areAnagrams(string s1, string s2) {
    if(s1.length() != s2.length()) return false;

    unordered_map<char, int> umap1;
    unordered_map<char, int> umap2;

    for(int i=0; i<s1.length(); i++) {
        umap1[s1[i]]++;
        umap2[s2[i]]++;
    }
    
    for (auto &p : umap1) {
        if (umap2[p.first] != p.second) {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1 = "triangle";
    string s2 = "integral";

    auto result = areAnagrams(s1, s2);
    if(result)
       cout << "true" <<endl;
    else 
       cout << "false" <<endl;
       

    return 0;
}