#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = letters.size()-1;

        while(left <= right) {
            int mid = left + (right - left)/2;
            if(letters[mid] <= target) left=mid+1;
            if(letters[mid] > target) right=mid-1;
        }
     
        if(left == letters.size()) return letters[0];
        return letters[left];
    }
};


int main()
{
    vector<char> letters = {'c','f','j'};
    int target = 'a';
    // int target = 'c';

    Solution obj;
    cout << "Ans-> " << obj.nextGreatestLetter(letters, target);

 return 0;
}