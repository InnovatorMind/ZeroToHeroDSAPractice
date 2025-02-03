// Dynamic Doubly Linked List (DLL) with User Input

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
    while (current != nullptr) {
        cout << "Value: " << current->num << " | Address: " << current 
             << " | Prev: " << current->prev << " | Next: " << current->next << endl;
        last = current;  // Store the last node for backward traversal
        current = current->next;
    }

    cout << "\nBackward Traversal:\n";
    while (last != nullptr) {
        cout << "Value: " << last->num << " | Address: " << last 
             << " | Prev: " << last->prev << " | Next: " << last->next << endl;
        last = last->prev;
    }
}

// Function to free memory
void cleanup(Node* &head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int n, value;

    cout << "Enter the number of nodes: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of nodes!" << endl;
        return 1;
    }

    // Creating the first node
    cout << "Enter value for node 1: ";
    cin >> value;
    Node* head = createNode(value);
    Node* current = head;

    // Creating remaining nodes based on user input
    for (int i = 2; i <= n; i++) {
        cout << "Enter value for node " << i << ": ";
        cin >> value;
        Node* newNode = createNode(value);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }

    // Display the linked list
    display(head);

    // Free memory
    cleanup(head);

    return 0;
}

