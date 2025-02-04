// Doubly Circle Linked list

#include <iostream>
using namespace std;

struct Node {
    int num;
    Node *next;
    Node *prev;
};

// Function to create a new node
Node *createNode(int value) {
    Node *newNode = new Node;
    newNode->num = value;
    newNode->next = newNode->prev = NULL;
    return newNode;
}

// Function to insert a node at the end (Doubly Circular Linked List)
void insertNode(Node *&start, int value) {
    Node *newNode = createNode(value);

    if (start == NULL) {
        start = newNode;
        start->next = start;
        start->prev = start;
        return;
    }

    Node *last = start->prev; // Last node (previous of start)
    last->next = newNode;
    newNode->prev = last;
    newNode->next = start;
    start->prev = newNode;
}

// Function to delete a node by position
void deleteByPosition(Node *&start, int position) {
    if (start == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node *current = start;
    int count = 1;

    // Case: Only one node in the list
    if (start->next == start && position == 1) {
        delete start;
        start = NULL;
        return;
    }

    // Traverse to the required node
    while (count < position && current->next != start) {
        current = current->next;
        count++;
    }

    // If position is invalid
    if (count != position) {
        cout << "Invalid position! Node does not exist.\n";
        return;
    }

    // If deleting the first node
    if (current == start) {
        start = start->next;
    }

    // Update links
    current->prev->next = current->next;
    current->next->prev = current->prev;

    delete current;
}

// Function to search for a node and return its position (1-based index)
int searchNode(Node *start, int key) {
    if (start == NULL) return -1;

    Node *current = start;
    int position = 1;
    do {
        if (current->num == key) return position;
        current = current->next;
        position++;
    } while (current != start);

    return -1; // Value not found
}

// Function to count the total number of nodes
int countNodes(Node *start) {
    if (start == NULL) return 0;

    int count = 0;
    Node *current = start;
    do {
        count++;
        current = current->next;
    } while (current != start);

    return count;
}

// Function to display the linked list in forward direction
void displayForward(Node *start) {
    if (start == NULL) {
        cout << "The linked list is empty.\n";
        return;
    }

    Node *current = start;
    cout << "\nLinked List (Forward):\n";
    do {
        cout << "Value: " << current->num << " | Address: " << current
             << " | Next: " << current->next << " | Prev: " << current->prev << endl;
        current = current->next;
    } while (current != start);
}

// Function to display the linked list in backward direction
void displayBackward(Node *start) {
    if (start == NULL) {
        cout << "The linked list is empty.\n";
        return;
    }

    Node *last = start->prev; // Last node
    Node *current = last;
    cout << "\nLinked List (Backward):\n";
    do {
        cout << "Value: " << current->num << " | Address: " << current
             << " | Next: " << current->next << " | Prev: " << current->prev << endl;
        current = current->prev;
    } while (current != last);
}

// Function to free allocated memory
void cleanup(Node *&start) {
    if (start == NULL) return;

    Node *current = start, *nextNode;
    do {
        nextNode = current->next;
        delete current;
        current = nextNode;
    } while (current != start);

    start = NULL;
    cout << "Linked list memory freed.\n";
}

// Main Function
int main() {
    Node *start = NULL;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert a node\n";
        cout << "2. Display linked list (Forward)\n";
        cout << "3. Display linked list (Backward)\n";
        cout << "4. Count total nodes\n";
        cout << "5. Search for a node\n";
        cout << "6. Delete a node by position\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertNode(start, value);
                break;

            case 2:
                displayForward(start);
                break;

            case 3:
                displayBackward(start);
                break;

            case 4:
                cout << "Total nodes in the list: " << countNodes(start) << endl;
                break;

            case 5: {
                cout << "Enter value to search: ";
                cin >> value;
                int pos = searchNode(start, value);
                if (pos != -1) {
                    cout << "Value " << value << " found at position " << pos << ".\n";
                } else {
                    cout << "Value " << value << " not found in the list.\n";
                }
                break;
            }

            case 6: {
                int pos;
                cout << "Enter the position of element that you want to delete: ";
                cin >> pos;
                deleteByPosition(start, pos);
                break;
            }

            case 7:
                cleanup(start);
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Please enter again.\n";
        }
    } while (choice != 7);

    return 0;
}
