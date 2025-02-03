// Improvements:
// Take input from the user for the number of nodes.
// Dynamically allocate nodes and append them to the linked list.
// Modify the display function to show user-entered data.
// Ensure proper memory cleanup

#include <iostream>
using namespace std;

struct node {
    int num;
    node* next;
};

// Function to create a new node
node* createNode(int value) {
    node* newNode = new node;
    newNode->num = value;
    newNode->next = NULL;
    return newNode;
}

// Function to display the linked list
void display(node* start) {
    node* current = start;
    cout << "\nLinked List Contents:\n";
    while (current != NULL) {
        cout << "Value: " << current->num << " | Address: " << current 
             << " | Next: " << current->next << endl;
        current = current->next;
    }
}

// Function to free allocated memory
void cleanup(node* start) {
    node* current = start;
    while (current != NULL) {
        node* temp = current;
        current = current->next;
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

    // Creating first node
    cout << "Enter value for node 1: ";
    cin >> value;
    node* start = createNode(value);
    node* current = start;

    // Creating remaining nodes based on user input
    for (int i = 2; i <= n; i++) {
        cout << "Enter value for node " << i << ": ";
        cin >> value;
        current->next = createNode(value);
        current = current->next;
    }

    // Display the linked list
    display(start);

    // Free memory
    cleanup(start);

    return 0;
}

