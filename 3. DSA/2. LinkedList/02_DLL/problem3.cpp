//  Dynamic Doubly Linked List (DLL) with new

#include <iostream>
using namespace std;

struct Node {
    int num;
    Node* prev;
    Node* next;
};

// Function to create a new node dynamically
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->num = value;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

// Function to display the linked list (both forward & backward)
void display(Node* head) {
    Node* current = head;
    Node* last = nullptr;

    cout << "\nForward Traversal:\n";
    while (current != NULL) {
        cout << "Address: " << current << ", num: " << current->num << ", prev: " << current->prev << ", next: " << current->next << endl;
        last = current;  // Store the last node for backward traversal
        current = current->next;
    }

    cout << "\nBackward Traversal:\n";
    while (last != NULL) {
        cout << "Address: " << last << ", num: " << last->num << ", prev: " << last->prev << ", next: " << last->next << endl;
        last = last->prev;
    }
}

// Function to free memory
void freeList(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Dynamically creating three nodes
    Node* start = createNode(4);
    Node* second = createNode(5);
    Node* third = createNode(6);

    // Linking nodes to form a doubly linked list
    start->next = second;
    second->prev = start;
    second->next = third;
    third->prev = second;

    // Display the linked list
    display(start);

    // Free allocated memory
    freeList(start);

    return 0;
}

