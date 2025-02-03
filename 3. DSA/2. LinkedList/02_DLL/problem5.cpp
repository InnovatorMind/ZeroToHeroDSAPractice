// Dynamic Doubly Linked List with a Menu (Insertion, Display, Exit)

#include <iostream>
using namespace std;

struct Node {
    int num;
    Node* prev;
    Node* next;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->num = value;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a new node at the end
void insertNode(Node*& head, int value) {
    Node* newNode = createNode(value);
    
    if (head == nullptr) { // If it's the first node
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
}

// Function to display the linked list (both forward & backward)
void display(Node* head) {
    if (head == nullptr) {
        cout << "The linked list is empty.\n";
        return;
    }

    Node* current = head;
    Node* last = nullptr;

    cout << "\nForward Traversal:\n";
    while (current != nullptr) {
        cout << "Value: " << current->num << " | Address: " << current 
             << " | Prev: " << current->prev << " | Next: " << current->next << endl;
        last = current; // Store last node for backward traversal
        current = current->next;
    }

    cout << "\nBackward Traversal:\n";
    while (last != nullptr) {
        cout << "Value: " << last->num << " | Address: " << last 
             << " | Prev: " << last->prev << " | Next: " << last->next << endl;
        last = last->prev;
    }
}

// Function to free allocated memory
void cleanup(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    head = nullptr;
    cout << "Linked list memory freed.\n";
}

int main() {
    Node* head = nullptr;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert a node\n";
        cout << "2. Display linked list\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            insertNode(head, value);
            break;

        case 2:
            display(head);
            break;

        case 3:
            cleanup(head);
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please enter again.\n";
        }
    } while (choice != 3);

    return 0;
}

