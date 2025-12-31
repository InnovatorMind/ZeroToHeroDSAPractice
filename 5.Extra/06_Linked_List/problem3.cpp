// 876. Middle of the Linked List

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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int totalNodes = 0;
        while(temp!=nullptr) {
            totalNodes++;
            temp=temp->next;
        }

        int mid = totalNodes/2;
        
        temp = head;
        while(mid>1) {
            temp=temp->next;
            mid--;
        }

        return temp;
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
    head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    Solution sol;
    // sol.middleNode(head->next);

    cout << "->: ";
    printList(sol.middleNode(head->next));

    while (head) {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}