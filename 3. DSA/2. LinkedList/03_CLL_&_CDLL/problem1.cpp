// Singly Circular Linked list

#include <iostream>
using namespace std;

struct node {
    int num;
    node *next;
};

// Function to create a new node
node *createNode(int value) {
    node *newNode = new node;
    newNode->num = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end (Circular Linked List)
void insertNode(node *&start, int value) {
    node *newNode = createNode(value);

    // If list is empty
    if (start == NULL) {
        start = newNode;
        start->next = start; // Circular link
        return;
    }

    // Find the last node
    node *last = start;
    while (last->next != start) {
        last = last->next;
    }

    // Insert at the end and maintain circular link
    last->next = newNode;
    newNode->next = start;
}

// Function to delete a node by position in Circular Linked List
void deleteByPosition(node *&start, int position) {
    if (start == NULL) {  
        cout << "List is empty.\n";  
        return;
    }

    node *current = start, *prev = NULL;
    int count = 1;

    // Case: Only one node in the list
    if (start->next == start && position == 1) {
        delete start;
        start = NULL;
        return;
    }

    // Finding the last node to maintain circular link
    node *last = start;
    while (last->next != start) {
        last = last->next;
    }

    // Deleting the first node
    if (position == 1) {
        last->next = start->next;  // Link last node to second node
        node *temp = start;
        start = start->next;       // Move start pointer
        delete temp;
        return;
    }

    // Traverse to the node before the position
    prev = start;
    current = start->next;
    while (count < position - 1 && current->next != start) {
        prev = current;
        current = current->next;
        count++;
    }

    // If position is out of range
    if (current == start) {
        cout << "Invalid position! Node does not exist.\n";
        return;
    }

    // Remove the node
    prev->next = current->next;
    delete current;
}

// Function to search for a node and return its position (1-based index)
int searchNode(node *start, int key) {
    if (start == NULL) return -1;

    node *current = start;
    int position = 1;
    do {
        if (current->num == key) return position;
        current = current->next;
        position++;
    } while (current != start);

    return -1; // Value not found
}

// Function to count the total number of nodes in Circular Linked List
int countNodes(node *start) {
    if (start == NULL) return 0;

    int count = 0;
    node *current = start;
    do {
        count++;
        current = current->next;
    } while (current != start);
    
    return count;
}

// Function to display the circular linked list
void display(node *start) {
    if (start == NULL) {
        cout << "The linked list is empty.\n";
        return;
    }

    node *current = start;
    cout << "\nLinked List Contents:\n";
    do {
        cout << "Value: " << current->num << " | Address: " << current
             << " | Next: " << current->next << endl;
        current = current->next;
    } while (current != start);
}

// Function to free allocated memory
void cleanup(node *&start) {
    if (start == NULL) return;

    node *current = start;
    node *nextNode;

    // Traverse and delete all nodes
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
    node *start = NULL;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert a node\n";
        cout << "2. Display linked list\n";
        cout << "3. Count total nodes\n";
        cout << "4. Search for a node\n";
        cout << "5. Delete a node by position\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertNode(start, value);
                break;

            case 2:
                display(start);
                break;

            case 3:
                cout << "Total nodes in the list: " << countNodes(start) << endl;
                break;

            case 4: {
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

            case 5: {
                int pos;
                cout << "Enter the position of element that you want to delete: ";
                cin >> pos;
                deleteByPosition(start, pos);
                break;
            }

            case 6:
                cleanup(start);
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Please enter again.\n";
        }
    } while (choice != 6);

    return 0;
}
