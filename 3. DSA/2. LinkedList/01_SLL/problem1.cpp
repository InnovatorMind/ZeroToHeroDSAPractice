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
    node start; // declaring struct variable
    start.num = 4; 

    cout << "--->" << &start << endl; // 0x401e3ffd90
    cout << "--->" << sizeof(start) << endl; // 16
    cout << "--->" << &start.num << endl;  // 0x401e3ffd90
    cout << "--->" << sizeof(start.num) << endl;  // 4
    cout << "--->" << &start.node << endl; // 0x401e3ffd98
    cout << "--->" << sizeof(start.node) << endl; // 8

    // |------------------------------|
    // | 4byts for int | 4byte empty  |
    // |------------------------------|
    // |       8byts for *node        |
    // |------------------------------|
            //    total 16 byte
    

    return 0;
}
