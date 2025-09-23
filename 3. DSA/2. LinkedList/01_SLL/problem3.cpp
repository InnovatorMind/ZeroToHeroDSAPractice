// Created a function to do all the things that we did in previous code. But with a better approach

#include <iostream>
using namespace std;

void display();

// created our own datatype node using struct
struct node
{
    int num;
    node* next;
};

// takes the first node address as an argument and retrive all the values of num from its connected node
void display(node* start) {
    node* current = start;
    while (current != NULL) {
        cout << "Address of node: " << current << " | ";
        cout << "Value of num: " << current->num << " | ";
        cout << "Address of next: " << current->next << " | ";
        cout << endl;
        current = current->next;
    }
}

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

    display(&start);

    return 0;
}
