// . Search for a word inside a sentence:

#include <iostream>
#include <vector>
#include <algorithm>  // for search
using namespace std;

int main() {
    vector<string> sentence = {"I", "love", "to", "code", "in", "C++"};
    vector<string> pattern = {"code", "in"};

    auto it = search(sentence.begin(), sentence.end(), pattern.begin(), pattern.end());

    if (it != sentence.end()) {
        cout << "Subsequence found at index " << (it - sentence.begin()) << endl;
    } else {
        cout << "Subsequence not found." << endl;
    }

    return 0;
}
