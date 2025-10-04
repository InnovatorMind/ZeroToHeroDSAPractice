
// 2d Array | Matrix
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<vector<int>> vp = { 
    //     {1,3,5,7},
    //     {10,11,16,20},
    //     {23,30,34,60}
    // };

    vector<vector<int>> vp = { 
        {5,6,7},
        {10,11,12,17},
    };

    cout << vp.size() <<endl;
    cout << vp[0].size() <<endl;
    cout << vp[1].size() <<endl;

    cout << vp[0][0] <<endl;
    cout << vp[0][1] <<endl;

 return 0;
}