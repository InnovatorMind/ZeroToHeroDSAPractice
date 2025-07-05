#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{

    // declaration
    map<string, int> m;

    // insert
    pair<string, int> p = make_pair("at", 3);
    m.insert(p);
    
    pair<string, int> pair2("op", 2);
    m.insert(pair2);

    m["mera"] = 1;

    // Searching 
    cout << m["mera"] <<endl;
    cout << m.at("op") <<endl;
    
    // cout << m["p"] <<endl;
    // cout << m.at("p") <<endl;
    
    // size
    cout << m.size() <<endl;

    // to check presence
    cout << m.count("at") <<endl;

    // erase
    // m.erase("at");
    // cout << m.size() <<endl;

    // print all
    for(auto i: m) {
        cout << i.first << i.second <<endl;
    }
    // unordered_map<string, int> :: iterator it = m.begin();
    // while(it != m.end()) {
    //     cout << it->first <<" " << it->second <<endl;
    //     it++;
    // }

 return 0;
}