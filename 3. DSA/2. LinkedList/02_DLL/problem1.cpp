// Basic Doubly Linked List (DLL) Implementation (Static Allocation)


#include <iostream>
using namespace std;

struct Node {
    int num;
    Node* prev;
    Node* next;
};

int main() {
    // Creating three nodes
    Node start, second, third;

    // Assigning values
    start.num = 4;
    second.num = 5;
    third.num = 6;

    // Linking nodes
    start.prev = nullptr; // First node's previous is NULL
    start.next = &second;

    second.prev = &start;
    second.next = &third;

    third.prev = &second;
    third.next = nullptr; // Last node's next is NULL

    // Displaying addresses and links
    cout << "Node 1: Address = " << &start << ", num = " << start.num << ", next = " << start.next << ", prev = " << start.prev << endl;
    cout << "Node 2: Address = " << &second << ", num = " << second.num << ", next = " << second.next << ", prev = " << second.prev << endl;
    cout << "Node 3: Address = " << &third << ", num = " << third.num << ", next = " << third.next << ", prev = " << third.prev << endl;

    return 0;
}
