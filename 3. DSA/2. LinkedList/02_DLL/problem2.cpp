// Better Approach: Using a Function to Handle DLL

#include <iostream>
using namespace std;

struct Node {
    int num;
    Node* prev;
    Node* next;
};

// Function to display the linked list (both forward & backward)
void display(Node* start) {
    Node* current = start;
    Node* last = nullptr;

    cout << "\nForward Traversal:\n";
    while (current != NULL) {
        cout << "Address of node: " << current << endl;
        cout << "Value of num: " << current->num << endl;
        cout << "Address of prev: " << current->prev << endl;
        cout << "Address of next: " << current->next << endl;
        last = current;  // Move last to the end node
        current = current->next;
    }

    cout << "\nBackward Traversal:\n";
    while (last != NULL) {
        cout << "Address of node: " << last << endl;
        cout << "Value of num: " << last->num << endl;
        cout << "Address of prev: " << last->prev << endl;
        cout << "Address of next: " << last->next << endl;
        last = last->prev;
    }
}

int main() {
    // Creating nodes
    Node start, second, third;

    // Assigning values
    start.num = 4;
    second.num = 5;
    third.num = 6;

    // Linking nodes for doubly linked list
    start.prev = nullptr;
    start.next = &second;

    second.prev = &start;
    second.next = &third;

    third.prev = &second;
    third.next = nullptr;

    // Display linked list details
    display(&start);

    return 0;
}
