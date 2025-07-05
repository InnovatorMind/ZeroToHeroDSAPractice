#include<iostream>
#include<map>
using namespace std;

int main()
{
    string str = "abcdefghijaaabbcdefghiabbccdd";
    map<char, int> op;

    for(int i=0; i<str.length(); i++){
        op[str[i]]++;
    }

    int max = 0;
    char ans;
    for(auto i: op) {
        if(i.second > max && i.first != ' ')  {
            max = i.second;
            ans = i.first;
        }
    }

    for(auto i: op) {
        cout << i.first << i.second <<endl;
    }

    cout << "Max occured char is: " << ans <<" that occures " << max<< " times" <<endl;

 return 0;
}