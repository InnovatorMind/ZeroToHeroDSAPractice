// Checking Out Size and Address of each variable in struct and struct variable itself

#include <iostream>
using namespace std;

struct node
{
    int num;
    int *node;
};

int main()
{

    // Address of each variable
    node start;
    start.num = 4;

    cout << "--->" << &start << endl;
    cout << "--->" << sizeof(start) << endl;
    cout << "--->" << &start.num << endl;
    cout << "--->" << sizeof(start.num) << endl;
    cout << "--->" << &start.node << endl;
    cout << "--->" << sizeof(start.node) << endl;

    return 0;
}
