// A simple Approch how to create and link each struct node variable in order to create a Linked List

#include <iostream>
using namespace std;

struct node
{
    int num;
    node *next;
};

int main()
{

    // Address of each variable
    node start, second, third;
    start.num = 4;
    start.next = &second;
    second.num = 5;
    second.next = &third;
    third.num = 6;
    third.next = NULL;

    cout << "--->" << &start << endl;       // 0xbf221ffda0
    cout << "--->" << start.num << " | " << &start.num << endl;   // 4 | 0xbf221ffda0
    cout << "--->" << start.next << " | " << &start.next << endl;  // 0xbf221ffd90 | 0xbf221ffda8
    cout << "--->" << &second << endl;      // 0xbf221ffd90
    cout << "--->" << second.num << " | " << &second.num << endl;  // 5 | 0xbf221ffd90
    cout << "--->" << second.next << " | " << &second.next << endl; // 0xbf221ffd80 | 0xbf221ffd98
    cout << "--->" << &third << endl;      // 0xbf221ffd80
    cout << "--->" << third.num << " | " << &third.num << endl;  // 6 | 0xbf221ffd80
    cout << "--->" << third.next << " | " << &third.next << endl; // 0 | 0x28d13ffcd8



    // |----------------------------|    |----------------------------|    |----------------------------|
    // |   4    |  0xbf221ffd90     | -> |   5    |  0xbf221ffd80     | -> |   6   |      NULL          |
    // |----------------------------|    |----------------------------|    |----------------------------|
    // |  add:  0xbf221ffda0        |    |  add:  0xbf221ffd90        |    |  add:  0xbf221ffd80        |
    // |----------------------------|    |----------------------------|    |----------------------------|

    return 0;
}
