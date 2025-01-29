// A simple Approch how to create and link each struct node variable in order to create a Linked List

#include <iostream>
using namespace std;

void display();

struct node
{
    int num;
    node* next;
};

int main()
{

    // Address of each variable
    node start,second,third;
    start.num = 4;
    start.next = &second;
    second.num = 5;
    second.next = &third;
    third.num = 6;
    third.next = NULL;

    cout << "--->" << &start << endl;
    cout << "--->" << &start.num << endl;
    cout << "--->" << &start.next << endl;
    cout << "--->" << &second << endl;
    cout << "--->" << &second.num << endl;
    cout << "--->" << &second.next << endl;

    return 0;
}
