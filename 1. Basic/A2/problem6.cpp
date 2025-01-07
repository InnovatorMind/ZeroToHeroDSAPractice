// Check wheather a given number is a three digit number or not 


#include<iostream>
using namespace std;
int main()
{

    int num;

    cout<<"Enter a number: ";
    cin>>num;

    if (num>= 99 || num <=999)
        cout<<num <<" is a 3 digit number" <<endl;
    else 
        cout<<num <<" is not a 3 digit number" <<endl;

 return 0;
}

