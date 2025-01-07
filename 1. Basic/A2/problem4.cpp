// Check wheather a given number is an even or odd
//  without using % operator

#include<iostream>
using namespace std;
int main()
{

    int num;

    cout<<"Enter a number: ";
    cin>>num;
    if ((num/2)*2 == num)
        cout<<num <<" is a even number" <<endl;
    else 
        cout<<num <<" is a odd number" <<endl;


 return 0;
}
