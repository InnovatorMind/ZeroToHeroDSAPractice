// created a seperate function for each creating node

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
    while (current != NULL) {
        cout << "Node Address: " << current << endl;
        cout << "Value (num): " << current->num << endl;
        cout << "Next Node Address: " << current->next << endl;
        cout << "-------------------------------" << endl;
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
    // Create nodes dynamically
    node* start = createNode(4);
    node* second = createNode(5);
    node* third = createNode(6);

    // Link the nodes
    start->next = second;
    second->next = third;

    // Display the linked list
    display(start);

    // Clean up memory
    cleanup(start);

    return 0;
}

// If you run the code without cleanup(), the program will have a memory leak,
//  but it won't write garbage to your disk—memory leaks only affect RAM. 
// The OS will reclaim the memory when the program exits, so short-lived programs won’t face serious issues. 
// However, in long-running applications, memory leaks can cause high RAM usage and performance problems. 
// Always free dynamically allocated memory as a best practice, especially in servers or large applications. 
// Use tools like Valgrind or AddressSanitizer to detect leaks.