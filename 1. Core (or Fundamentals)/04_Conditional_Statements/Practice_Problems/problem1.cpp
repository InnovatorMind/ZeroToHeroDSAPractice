// check whether a given number is positive or non positive

#include <iostream>
using namespace std;
int main()
{
    int num = 5;

    if (num > 0)
    {
        cout << "Number is positive";
    }
    else
    {
        cout << "Number is non negative";
    }

    // You can also write like this
    if (num > 0)
        cout << "Number is positive";
    else
        cout << "Number is non positive";
    
    
    // Using tertiary operator
    cout<<((num>0)?"positive":"no-positive");
    
    return 0;
}