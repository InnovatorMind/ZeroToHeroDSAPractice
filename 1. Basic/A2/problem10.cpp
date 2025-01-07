// . Write a program to find the greatest among three given numbers. 
// Print number once if the greatest number appears two or three times


#include<iostream>
using namespace std;
int main()
{
    int a = 4, b=5, c= 9;
    
    if (a>b)
    {
        if (a>c)
             cout << a << " is Greater" << endl;
        else
             cout << c << " is Greater" << endl;
    } 
    else
    {
        if (b>c)
            cout << b << " is Greater" << endl;
        else 
             cout << a << " is Greater" << endl;
    }
    
    // ALT
    // cout << (a > b ? (a > c ? a : c) : (b > c ? b : c));
 


    cout<< "";
 return 0;
}