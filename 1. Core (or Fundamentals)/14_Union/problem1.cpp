#include<iostream>
using namespace std;
int main()
{
    union problem1
    {
        int a;
        double b;
    };

    union problem1 x1;
    x1.a=5;
    x1.b=34.7;

    cout <<"-> " << x1.b <<endl;
    
 return 0;
}