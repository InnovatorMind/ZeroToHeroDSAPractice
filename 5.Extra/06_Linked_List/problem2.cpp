// 2095. Delete the Middle Node of a Linked List

#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Helper to print the list
void printList(ListNode *head) {
    while (head)
    {
        cout << head->val;
        if (head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// ================================================================

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr) {
            head = nullptr;
            return head;
        }

        int length = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            length++;
            temp=temp->next;
        }
        // cout << "length: " << length;
        int pos = length/2;
        // cout << "position: " << pos;

        temp = head;
        while(pos>1) {
            temp=temp->next;
            pos--;
        }
        // cout <<"is this: " << temp->val;
        ListNode *toDel = temp->next;
        temp->next = toDel->next;
        delete toDel;
        return head;
    }
};

// ================================================================


int main()
{
    cout << "Woopsy doopsy!!" << endl;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Original list: ";
    printList(head);

    Solution sol;
    sol.deleteMiddle(head->next);

    cout << "After deleting 5: ";
    printList(head);

    while (head) {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}