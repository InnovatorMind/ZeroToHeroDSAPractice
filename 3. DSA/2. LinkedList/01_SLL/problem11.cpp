// Delete a node (by position).

#include <iostream>
using namespace std;

struct node
{
    int num;
    node *next;
};

// Delete Intitial node
void deleteByPosition(node *&start, int position) {
    if (start == NULL) {  
        cout << "List is empty.\n";  
        return;
    }

    // Deleting the first node (special case)
    if (position == 1) {
        node* temp = start;
        start = start->next;
        delete temp;
        return;
    }

    node* current = start;
    node* prev = NULL;

    // Traverse to the position
    for (int i = 1; i < position && current != NULL; i++) {
        prev = current;
        current = current->next;
    }

    // If position is out of range
    if (current == NULL) {
        cout << "Invalid position! Node does not exist.\n";
        return;
    }

    // Remove the node
    prev->next = current->next;
    delete current;
}


// Function to search for a node and return its position (1-based index)
int searchNode(node *start, int key)
{
    node *current = start;
    int position = 1;

    while (current != NULL)
    {
        if (current->num == key)
        {
            return position; // Return the position of the found node
        }
        current = current->next;
        position++;
    }

    return -1; // Value not found
}

// Function to count the total number of nodes
int countNodes(node *start)
{
    int count = 0;
    node *current = start;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

// Function to create a new node
node *createNode(int value)
{
    node *newNode = new node;
    newNode->num = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end
void insertNode(node *&start, int value)
{
    node *newNode = createNode(value);

    // If it is the first node
    if (start == NULL)
    {
        start = newNode;
        return;
    }

    // If it is not the first node
    node *current = start;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}

// Function to display the linked list
void display(node *start)
{
    if (start == NULL)
    {
        cout << "The linked list is empty.\n";
        return;
    }

    node *current = start;
    cout << "\nLinked List Contents:\n";
    while (current != NULL)
    {
        cout << "Value: " << current->num << " | Address: " << current
             << " | Next: " << current->next << endl;
        current = current->next;
    }
}

// Function to free allocated memory
void cleanup(node *&start)
{
    node *current = start;
    while (current != NULL)
    {
        node *temp = current;
        current = current->next;
        delete temp;
    }
    start = NULL;
    cout << "Linked list memory freed.\n";
}

int main()
{
    node *start = NULL;
    int choice, value;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Insert a node\n";
        cout << "2. Display linked list\n";
        cout << "3. Count total nodes\n";
        cout << "4. Search for a node\n"; // New search option
        cout << "5. Delete a node by position\n";
        cout << "6. Exit\n";              // Moved Exit to position 5
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
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

        case 4: // Searching case with position
            cout << "Enter value to search: ";
            cin >> value;
            int pos;
            pos = searchNode(start, value);
            if (pos != -1)
            {
                cout << "Value " << value << " found at position " << pos << ".\n";
            }
            else
            {
                cout << "Value " << value << " not found in the list.\n";
            }
            break;

        case 5 :
            int value;
            cout<< "Enter the position of Element that you want to delete: ";
            cin>>value;
            deleteByPosition(start, value);
            break;

        case 6: // Updated Exit position
            cleanup(start);
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please enter again.\n";
        }
    } while (choice != 6);

    return 0;
}
