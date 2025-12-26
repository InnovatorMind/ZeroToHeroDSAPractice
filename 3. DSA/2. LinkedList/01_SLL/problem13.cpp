#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insertNode(ListNode *&start, int value) {
    if(start==nullptr) {
        start = new ListNode(value);
        return;
    }

    ListNode* temp = start;
    while(temp->next != nullptr) temp=temp->next;
    temp->next = new ListNode(value);
}

void display(ListNode *start) {
    while (start!=nullptr)
    {
        cout << "->" << start->val << endl;
        start=start->next;
    }
}

void deleteLast(ListNode *& start) {
    if(start == nullptr) {
        cout << "List is Empty!!!" << endl;
        return;
    }

    if(start->next == nullptr){
        delete start;
        start = nullptr;
        return;
    }

    ListNode *temp = start;
    while (temp->next->next!=nullptr) {
        temp = temp->next;
    }
    
    delete temp->next;
    temp->next = nullptr;
}

void deleteFirst(ListNode *& start) {
    if(start==nullptr) {
        cout << "List is Empty" << endl;
        return;
    }
    ListNode *temp = start;
    start=start->next;
    delete temp;
}

void deletePosition(ListNode *&start, int pos) {
    if (start == nullptr || pos <= 0)
        return;
    
    if (pos == 1) {
        ListNode* temp = start;
        start = start->next;
        delete temp;
        return;
    }

    int i = 1;
    ListNode *temp = start;
    while (temp->next!=nullptr && i<pos-1) {
        temp = temp->next;
        i++;
    }
    if(temp->next == nullptr) return;

    ListNode *dnode = temp->next;
    temp->next = dnode->next;
    delete dnode;
}

void countNodes(ListNode *start) {
    int totalNodes=0;
    while(start!=nullptr) {
        totalNodes++;
        start = start->next;
    }
    cout << "Totalnodes: " <<totalNodes << endl;
}

int main()
{
    int choice, value;
    ListNode *start = nullptr;
    do{
        cout << "\nMenu:\n";
        cout << "1. Insert a node\n";
        cout << "2. Display linked list\n";
        cout << "3. Delete the last one: \n";
        cout << "4. Delete the first one: \n";
        cout << "5. Delete the position one: \n";
        cout << "6. Count total nodes\n";
        cout << "7. Exit\n";              // Moved Exit to position 5
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number that you wanna insert: ";
            cin >> value;
            insertNode(start, value);
            break;
        case 2:
            cout << "Display:" << endl;
            display(start);
            break;
        case 3:
            deleteLast(start);
            break;
        case 4:
            deleteFirst(start);
            break;
        case 5:
            int pos;
            cout << "Enter a position: ";
            cin >> pos;
            deletePosition(start, pos);
            break;
        case 6:
            countNodes(start);
            break;
        default:
            cout << "Its not a valid choice!!" << endl;
            break;
        }
    } while(choice!=7);
    
    return 0;
}